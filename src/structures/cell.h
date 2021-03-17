#ifndef CELL_H
#define CELL_H

#include "molecules/dna.h"
#include "structures/organelle.h"

typedef enum cell_state_enum {
	DEAD,
	ALIVE
} Cell_State;

typedef struct cell_struct {
	Organelle** 	organelles;
	int 		organelle_count;
	Cell_State	state;
} Cell;

Cell* 	make_empty_cell();
Cell* 	make_cell(Organelle**);

int 		cell_add_organelle(Cell*, Organelle*);
int 		cell_delete_organelle(Cell*, Organelle*);
int		cell_delete_organelle_at(Cell*, int);

Organelle* 	cell_get_organelle(Cell*, int);

char* 	cell_state(Cell);
char* 	cell_print(Cell);

#endif
