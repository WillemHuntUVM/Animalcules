#ifndef REGISTER_H
#define REGISTER_H

#define REGISTER_TYPE_DNA 0
#define REGISTER_TYPE_RNA 1
#define REGISTER_TYPE_PROTEIN 2

#define REGISTER_STATUS_EMPTY 0
#define REGISTER_STATUS_FULL 1

typedef struct register_struct {
	int id;
	int type;
	int status;
	int capacity;
	void* contents;
} Register;

int 	register_fill(Register*, void*);
void 	register_empty(Register*);
void 	register_peek(Register*);

int 	register_fits(Register, void*);

#endif
