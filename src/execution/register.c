#include "register.h"

int 	register_fill(Register* reg, void* content){
	if(reg->status != FULL){
		reg->contents = content;
		return 0;
	}else{
		return 1;
	}
}

void* 	register_empty(Register* reg){
	void* ptr;
	if(reg->status != EMPTY){
		ptr = reg->contents;
		reg->contents = NULL;
		return ptr;
	}else{
		return NULL;
	}
}

#endif
