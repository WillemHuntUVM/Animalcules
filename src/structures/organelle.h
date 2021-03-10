#ifndef ORGANELLE_H
#define ORGANELLE_H

#include "molecules/dna.h"
#include "execution/env.h"
#include "execution/register.h"

#define ORGANELLE_TYPE_WORKER 		0
#define ORGANELLE_TYPE_PRODUCER 	1
#define ORGANELLE_TYPE_READER 		2
#define ORGANELLE_TYPE_WRITER 		3

#define ORGANELLE_STATUS_DEAD		0
#define ORGANELLE_STATUS_IDLE		1
#define ORGANELLE_STATUS_WORKING	2
#define ORGANELLE_STATUS_ERROR		3

typedef struct organelle_struct {
	int type;
	int status;
	Strand* working_code;
	Register** registers;
	Exec_Environment env;
} Organelle;

int 		organelle_set_status(Organelle*, int);
int 		organelle_execute_code(Organelle*, int);

int 		organelle_fill_register(Register*, Strand);
Strand* 	organelle_read_register(Register*, Strand);
int 		organelle_reset_env(Organelle*);

Organelle 	make_organelle(int, Strand*);
Organelle 	make_worker_organelle(Strand*);
Organelle 	make_reader_organelle(Strand*);
Organelle 	make_writer_organelle(Strand*);
Organelle 	make_reader_organelle(Strand*);

char* organelle_state(Organelle);
char* organelle_print(Organelle);

#endif
