#include "rna.h"
#include <stdlib.h>

RNA_Base rna_base_get_partner(RNA_Base b){
	switch (b) {
		case RNA_ADENINE: 
			return RNA_URACIL;
			break;
		case RNA_URACIL: 
			return RNA_ADENINE;
			break;
		case RNA_GUANINE: 
			return RNA_CYTOSINE;
			break;
		case RNA_CYTOSINE: 
			return RNA_GUANINE;
			break;
		default:
			return -1;
	}
}

char* rna_base_to_string(RNA_Base b){
	switch (b) {
		case RNA_ADENINE:
			return "Adenine";
			break;
		case RNA_URACIL:
			return "Uracil";
			break;
		case RNA_GUANINE:
			return "Guanine";
			break;
		case RNA_CYTOSINE:
			return "Cytosine";
			break;
		default:
			return "INVALID BASE";
	}
}

char rna_base_to_char(RNA_Base b){
	switch (b) {
		case RNA_ADENINE:
		      return 'A';
		      break;
		case RNA_URACIL:
		      return 'U';
		      break;
		case RNA_GUANINE:
		      return 'G';
		      break;
		case RNA_CYTOSINE:
		      return 'C';
		      break;
		default:
		      return '_';
	}
}

RNA_Base rna_get_base(RNA_Strand s, int i){
	return s.bases[i];
}

int rna_set_base(RNA_Strand* s, int i, RNA_Base b){
	s->bases[i] = b;
	return 0;
}

char* rna_to_string(RNA_Strand s){
	char* str = (char*) malloc(s.length);
	int i;
	for(i=0;i<s.length;i++){
		str[i] = rna_base_to_char(rna_get_base(s, i));
	}
	return str;
}
