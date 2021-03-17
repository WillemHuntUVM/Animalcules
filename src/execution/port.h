#ifndef PORT_H
#define PORT_H

typedef enum port_type_enum {
	DNA,
	RNA,
	PROTEIN
} Port_Type;

typedef enum port_status_enum {
	FULL,
	EMPTY
} Port_Status;

typedef struct port_struct {
	void* contents;
	Port_Type type;
	Port_Status status;
} Port;

int 	port_fill(Port*, void*);
void* 	port_empty(Port*);

char* 	port_print(Port);

#endif
