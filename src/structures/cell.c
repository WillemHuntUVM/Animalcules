#include <stdlib.h>
#include "structures/cell.h"
#include "structures/organelle.h"

Cell* make_empty_cell(){
	Cell* c = (Cell*) malloc(sizeof(Cell));
	c->organelles = NULL;
	c->organelle_count = 0;
	c->state = DEAD;
	return c;	
}

Cell* make_cell(Organelle** organelles){
	Cell* c = make_empty_cell();
	c->organelles = organelles;
	return c;
}

int cell_add_organelle(Cell* cell, Organelle* new_organelle, OrganelleType type){
	Organelle** destination = cell->organelles;
	int count = cell->organelle_count;
	destination[count] = new_organelle;
	cell->organelle_count += 1;	
	return 0;
}

int cell_delete_organelle(Cell* cell, Organelle* organelle){
	int i;
	Organelle** new_list;
	int new_list_count = 0;

	for(i=0;i<cell->organelle_count;i++){
		if(cell->organelles[i] != organelle){
			new_list[new_list_count] = cell->organelles[i];
		}else{
			free(cell->organelles[i]);
		}
	}

	cell->organelles = new_list;
	return 0;
}

int cell_delete_organelle_at(Cell* cell, int index){
	int i;
	Organelle** new_list;
	int new_list_count = 0;
	for(i=0;i<cell->organelle_count;i++){
		if (i != index){
			new_list[new_list_count] = cell->organelles[i];
			new_list_count += 1;
		}else{
			free(cell->organelles[i];
		}
	}
	cell->organelles = new_list;
	return 0;
}

Organelle* cell_get_organelle_at(Cell* cell, int index){
	return cell->organelles[index];
}

char* 	cell_state(Cell c){
	switch (c.state) {
		case DEAD: 
			return "Dead";
			break;
		case ALIVE: 
			return "Alive";
	}
}

char* 	cell_print(Cell c){
	char* cell_str = "Cell: " + cell_state(c);
	return cell_str;
}

