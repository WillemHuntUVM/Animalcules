#ifndef ORGANELLE_H
#define ORGANELLE_H

#include "molecules/dna.h"

#include "execution/env.h"
#include "execution/register.h"

typedef enum OrganelleTypes{
	WORKER,
	PRODUCER,
	READER,
	WRITER
} OrganelleType;

typedef enum OrganelleStatus{
	IDLE,
	WORKING,
	ERROR
} OrganelleStatus;

typedef struct organelle_struct {
	OrganelleType type;
	OrganelleStatus status;
	Strand* working_code;
	Register** registers;
	Exec_Environment env;
} Organelle;

int 		organelle_set_status(Organelle*, OrganelleStatus);
int 		organelle_execute_code(Organelle*);

int 		organelle_fill_register(Register*, Strand);
Strand* 	organelle_read_register(Register*, Strand);
int 		organelle_reset_env(Organelle*);

Organelle 	make_organelle(OrganelleType, Strand*);
Organelle 	make_worker_organelle(Strand*);
Organelle 	make_reader_organelle(Strand*);
Organelle 	make_writer_organelle(Strand*);
Organelle 	make_reader_organelle(Strand*);

char* organelle_state(Organelle);
char* organelle_print(Organelle);

#endif
