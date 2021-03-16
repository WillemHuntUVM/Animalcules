#include "dna.h"
#include <stdlib.h>

DNA_Base dna_base_get_partner(DNA_Base b){
	switch(b) {
		case ADENINE: 
			return THYMINE;
			break;
		case THYMINE: 
			return ADENINE;
			break;
		case GUANINE: 
			return CYTOSINE;
			break;
		case CYTOSINE: 
			return GUANINE;
	}
}

char* dna_base_to_string(DNA_Base b){
	switch (b) {
		case ADENINE:
			return "Adenine";
			break;
		case THYMINE:
			return "Thymine";
			break;
		case GUANINE:
			return "Guanine";
			break;
		case CYTOSINE:
			return "Cytosine";
	}
}

char dna_base_to_char(DNA_Base b){
	switch (b) {
		case ADENINE:
		      return 'A';
		      break;
		case THYMINE:
		      return 'T';
		      break;
		case GUANINE:
		      return 'G';
		      break;
		case CYTOSINE:
		      return 'C';
	}
}

DNA_Base dna_get_base(DNA s, int i){
	return s.bases[i];
}

int dna_set_base(DNA* s, int i, DNA_Base b){
	s->bases[i] = b;
	return 0;
}

char* dna_to_string(DNA s){
	char* str = (char*) malloc(s.length);
	int i;
	for(i=0;i<s.length;i++){
		str[i] = dna_base_to_char(dna_get_base(s, i));
	}
	return str;
}
