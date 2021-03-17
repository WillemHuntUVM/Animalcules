#ifndef REGISTER_H
#define REGISTER_H

typedef enum register_type_enum {
	DNA,
	RNA,
	PROTEIN
} Register_Type;

typedef enum register_status_enum {
	EMPTY,
	FULL
} Register_Status;

typedef struct register_struct {
	Register_Type 	type;
	Register_Status	status;
	void* 		contents;
} Register;

int 	register_fill(Register*, void*);
void* 	register_empty(Register*);
void*	register_peek(Register);

#endif
