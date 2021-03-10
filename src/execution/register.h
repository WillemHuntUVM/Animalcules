#ifndef REGISTER_H
#define REGISTER_H

typedef enum register_type {
	DNA,
	RNA,
	PROTEIN
} Register_Type;

typedef enum register_status {
	EMPTY,
	FULL
} Register_Status;

typedef struct register_struct {
	int 		id;
	RegisterType 	type;
	RegisterStatus 	status;
	int 		max_bases;
	void* 		contents;
} Register;

int 	register_fill(Register*, void*);
void* 	register_empty(Register*);
void*	register_peek(Register*);

int 	register_fits(Register, void*);

#endif
