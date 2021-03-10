#ifndef ENV_H
#define ENV_H

#include "execution/port.h"
#include "execution/register.h"

typedef struct environment_struct {
	int id;
	int type;
	int status;
	int head_pos;
	Register** 	registers;
	Port**		out_ports;
	Port** 		in_ports;
} Exec_Environment;

int env_execute_dna_strand(DNA_Strand, Exec_Environment*);
int env_execute_dna_codon(DNA_Strand, Exec_Environment*);
int env_execute_dna_base(DNA_Strand, Exec_Environment*);

int env_execute_rna_strand(RNA_Strand, Exec_Environment*);
int env_execute_rna_codon(RNA_Strand, Exec_Environment*);
int env_execute_rna_base(RNA_Strand, Exec_Environment*);

int env_move_head_to_position(int, Exec_Environment*);
int env_shift_head(int, Exec_Environment*);

char* env_status(Exec_Environment);
char* env_print(Exec_Environment);

#endif
