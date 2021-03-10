#ifndef ENV_H
#define ENV_H

typedef struct environment_struct {
	int id;
	int type;
	int status;
	int head_pos;
	Register** 	registers;
	Port**		out_ports;
	Port** 		in_ports;
} Exec_Environment;

int env_execute_strand(Strand, Exec_Environment*);
int env_execute_codon(Strand, Exec_Environment*);
int env_execute_base(Strand, Exec_Environment*);

int env_move_head(int, Exec_Environment*);
int env_shift_head(int, Exec_Environment*);

char* env_status(Exec_Environment);
char* env_print(Exec_Environment);

#endif
