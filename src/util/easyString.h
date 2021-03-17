#ifndef EASY_STRING_H
#define EASY_STRING_H

#include <stdlib.h>

typedef struct easy_string_struct{
	char* characters;
	int length;
} EString;

EString* estring(){
	EString* e = (EString *) malloc(sizeof(EString));
	e->characters = "";
	e->length = 0;
}

EString estring_from_char(Char* chars, int length){
	EString* e = estring();
	e->characters = chars;
	e->length = length;
}

EString estring_cat(EString e1, EString e2){
	EString* e = estring();
	e->length = (e1.length + e2.length);
	char* new_chars = (char *) malloc(sizeof(char) * e->length);
	int i;
	for(i=0;i<e1.length;i++){
		e->characters[i] = e1.characters[i];
	}
	for(i=e1.length;i<e->length;i++){
		e->characters[i] = e2.characters[i];
	}
	return e;
}

#endif
