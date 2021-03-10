#ifndef CELL_H
#define CELL_H

#include "molecules/dna.h"
#include "organelle.h"

#define CELL_DEAD 	0
#define CELL_ALIVE 	1

typedef struct cell_struct {
	Producer_Organelle** producer_organelles;
	Worker_Organelle** worker_organelles;
	int state;
	int producer_count;
	int worker_count;
} Cell;

Cell make_cell(DNA_Strand);
int cell_add_worker(Cell*, Worker_Organelle*);


#endif
