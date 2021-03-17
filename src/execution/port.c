#include "port.h"

int 	port_fill(Port* port, void* content){
	if(port->status != FULL){
		port->contents = content;
		return 0;
	}else{
		return 1;
	}
}

void* 	port_empty(Port* port){
	void* ptr;
	if(port->status != EMPTY){
		ptr = port->contents;
		port->contents = NULL;
		port->status = EMPTY;
		return ptr;
	}else{
		return NULL;
	}
}

char* 	port_print(Port port){
	if(port.status == EMPTY){
		return "Port: Empty";
	}else{
		return "Port: Full";
	}
}

