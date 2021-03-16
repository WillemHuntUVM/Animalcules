#include "rna.h"
#include <stdlib.h>

RNA_Base rna_base_get_partner(RNA_Base b){
	switch (b) {
		case ADENINE: 
			return URACIL;
			break;
		case URACIL: 
			return ADENINE;
			break;
		case GUANINE: 
			return CYTOSINE;
			break;
		case CYTOSINE: 
			return GUANINE;
	}
}

char* rna_base_to_string(RNA_Base b){
	switch (b) {
		case ADENINE:
			return "Adenine";
			break;
		case URACIL:
			return "Uracil";
			break;
		case GUANINE:
			return "Guanine";
			break;
		case CYTOSINE:
			return "Cytosine";
	}
}

char rna_base_to_char(RNA_Base b){
	switch (b) {
		case ADENINE:
		      return 'A';
		      break;
		case URACIL:
		      return 'U';
		      break;
		case GUANINE:
		      return 'G';
		      break;
		case CYTOSINE:
		      return 'C';
	}
}

RNA_Base rna_get_base(RNA s, int i){
	return s.bases[i];
}

int rna_set_base(RNA* s, int i, RNA_Base b){
	s->bases[i] = b;
	return 0;
}

char* rna_to_string(RNA s){
	char* str = (char*) malloc(s.length);
	int i;
	for(i=0;i<s.length;i++){
		str[i] = rna_base_to_char(rna_get_base(s, i));
	}
	return str;
}
