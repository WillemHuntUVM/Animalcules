#ifndef PORT_H
#define PORT_H

#define PORT_STATUS_FULL 1
#define PORT_STATUS_EMPTY 0

#define PORT_TYPE_DNA 0
#define PORT_TYPE_RNA 1
#define PORT_TYPE_PROTEIN 2

typedef struct port_struct {
	void* contents;
	int type;
	int status;
} Port;

int 	port_fill(Port*, void*);
void* 	port_peek(Port*);
void* 	port_empty(Port*);

int	port_is_type(Port, int);
int 	port_has_status(Port, int);

char* 	port_print(Port);

#endif
