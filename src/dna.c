
#include "dna.h"
#include <stdlib.h>

DNA_Base get_partner(DNA_Base b){
	switch b {
		case DNA_ADENINE: 
			return DNA_THYMINE;
			break;
		case DNA_THYMINE: 
			return DNA_ADENINE;
			break;
		case DNA_GUANINE: 
			return DNA_CYTOSINE;
			break;
		case DNA_CYTOSINE: 
			return DNA_GUANINE;
			break;
		default:
			return -1;
	}
}

char* to_string(DNA_Base b){
	switch b {
		case DNA_ADENINE:
			return "Adenine";
			break;
		case DNA_THYMINE:
			return "Thymine";
			break;
		case DNA_GUANINE:
			return "Guanine";
			break;
		case DNA_CYTOSINE:
			return "Cytosine";
			break;
		default:
			return "INVALID BASE";
	}
}

char* to_char(DNA_Base b){
	switch b {
		case: DNA_ADENINE:
		      return "A";
		      break;
		case: DNA_THYMINE:
		      return "T";
		      break;
		case: DNA_GUANINE:
		      return "G";
		      break;
		case: DNA_CYTOSINE:
		      return "C";
		      break;
		default:
		      return ""
	}
}

DNA_Base get_base(*DNA_Strand s, int i){
	return s->bases[i];
}

int set_base(*DNA_Strand s, int i, DNA_Base b){
	s->bases[i] = b;
	return 0;
}

char* to_string(*DNA_Strand s){
	str = (char*) malloc(s->length);
	int i;
	for(i=0;i<s->length;i++){
		str[i] = to_char(get_base(s, i));
	}
	return str;
}
