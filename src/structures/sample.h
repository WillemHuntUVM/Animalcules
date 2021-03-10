#ifndef SAMPLE_H
#define SAMPLE_H

#include "structures/medium.h"
#include "structures/cell.h"

#define SAMPLE_STATE_ACTIVE 0
#define SAMPLE_STATE_IDLE 1

typedef struct sample_struct {
	Cell** cells;
	int cellCount;
	Medium medium;
} Sample;

int update_sample(Sample*);
char* print_sample(Sample);

int sample_add_cell(Sample*, Cell);

#endif
