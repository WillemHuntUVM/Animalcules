#include <stdlib.h>
#include "structures/cell.h"
#include "structures/organelle.h"

Cell* make_cell(DNA_Strand* strand){
	Cell* c = (Cell*) malloc(sizeof(Cell));
	c.producer_organelles = NULL;
	c.worker_organelles = NULL;
	c.reader_organelles = NULL;
	c.writer_organelles = NULL;
	c.producer_count = 0;
	c.reader_count = 0;
	c.writer_count = 0;
	c.worker_count = 0;
	c.state = IDLE;
	return c;	
}

int cell_add_organelle(Cell* cell, Organelle* new_organelle, OrganelleType type){
	Organelle** destination;
	int count;
	switch (type){
		case WORKER: 
			destination 	= cell->worker_organelles;
			count 		= cell->worker_count;
			break;
		case PRODUCER: 
			destination 	= cell->producer_organelles;
			count 	 	= cell->producer_count;
			break;
		case WRITER: 
			destination 	= cell->writer_organelles;
			count 		= cell->writer_count;
			break;
		case READER: 
			destination 	= cell->reader_organelles;
			count 		= cell->reader_count;
			break;
		default: 
			return -1;
	}

	destination[count] = new_organelle;
	
	switch(type){
		case READER: 
			cell->reader_count += 1;
			break;
		case WRITER:
			cell->writer_count += 1;
			break;
		case PRODUCER:
			cell->producer_count += 1;
			break;
		case WORKER:
			cell->worker_count += 1;
			break;
		default:
			return -1;
	}

	return 0;
}

int cell_delete_organelle(Cell* cell, Organelle* organelle){
	int i;
	Organelle** new_list;
	int new_list_count = 0;

	for(i=0;i<cell->worker_count;i++){
		if(cell->worker_organelles[i] != organelle){
			new_list[new_list_count] = cell->worker_organelles[i];
		}	
	}

	return 0;
}

char* 	cell_state(Cell c){
	switch (c.type) {
		case WORKER: 
			return "Worker";
			break;
		case PRODUCER: 
			return "Producer";
			break;
		case WRITER: 
			return "Writer";
			break;
		case READER: 
			return "Reader";
			break;
		default: 
			return "ERROR";
	}
}

char* 	cell_print(Cell c){
	char* cell_str = "Cell: " + cell_state(c);
	return cell_str;
}

