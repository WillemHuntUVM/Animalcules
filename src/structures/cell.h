#ifndef CELL_H
#define CELL_H

#include "molecules/dna.h"
#include "structures/organelle.h"

#define CELL_STATE_DEAD 	0
#define CELL_STATE_ALIVE	1

typedef struct cell_struct {
	Organelle** producer_organelles;	// Material -> Material
	Organelle** worker_organelles;		// Energy -> Action
	Organelle** reader_organelles;		// Code -> Effects
	Organelle** writer_organelles; 		// Code -> Code
	int producer_count;
	int worker_count;
	int reader_count;
	int writer_count;
	int state;				// Alive: 0, Dead: 1
} Cell;

Cell* 	make_cell(DNA_Strand*);

int 	cell_add_organelle(Organelle*, char*);
int 	cell_delete_organelle(Organelle*);

char* 	cell_state(Cell);
char* 	cell_print(Cell);

#endif
