#include <stdlib.h>
#include "protein.h"

char amino_to_char(Amino a){	
	switch (a) {
		case ALANINE:
			return 'A';
			break;
		case CYSTEINE:
			return 'C';
			break;
		case ASPARTIC_ACID:
			return 'D';
			break;
		case GLUTAMIC_ACID:
			return 'E';
			break;
		case PHENYLALANINE:
			return 'F';
			break;
		case GLYCINE:
			return 'G';
			break;
		case HISTIDINE:
			return 'H';
			break;
		case ISOLEUCINE:
			return 'I';
			break;
		case LYSINE:
			return 'K';
			break;
		case LEUCINE:
			return 'L';
			break;
		case METHIONINE:
			return 'M';
			break;
		case ASPARAGINE:
			return 'N';
			break;
		case PROLINE:
			return 'P';
			break;
		case GLUTAMINE:
			return 'Q';
			break;
		case ARGININE:
			return 'R';
			break;
		case SERINE:
			return 'S';
			break;
		case THREONINE:
			return 'T';
			break;
		case TRYPTOPHAN:
			return 'W';
			break;
		case TYROSINE:
			return 'Y';
			break;
		case VALINE:
			return 'V';
	}
}

char* amino_to_sym(Amino a){
	switch (a) {
		case ALANINE:
			return "ala";
			break;
		case CYSTEINE:
			return "cys";
			break;
		case ASPARTIC_ACID:
			return "asp";
			break;
		case GLUTAMIC_ACID:
			return "glu";
			break;
		case PHENYLALANINE:
			return "phe";
			break;
		case GLYCINE:
			return "gly";
			break;
		case HISTIDINE:
			return "his";
			break;
		case ISOLEUCINE:
			return "ile";
			break;
		case LYSINE:
			return "lys";
			break;
		case LEUCINE:
			return "leu";
			break;
		case METHIONINE:
			return "met";
			break;
		case ASPARAGINE:
			return "asn";
			break;
		case PROLINE:
			return "pro";
			break;
		case GLUTAMINE:
			return "gln";
			break;
		case ARGININE:
			return "arg";
			break;
		case SERINE:
			return "ser";
			break;
		case THREONINE:
			return "thr";
			break;
		case TRYPTOPHAN:
			return "trp";
			break;
		case TYROSINE:
			return "tyr";
			break;
		case VALINE:
			return "val";
	}
}

Amino	protein_get_base(Protein s, int i){
	return s.acids[i];
}

Amino*	protein_get_bases(Protein s, int il, int ir){
	Amino* list = (Amino*) malloc(sizeof(int)*(il-ir));
	int len = il - ir;
	int a;
	for(a=0;a<len;a++){
		list[a] = s.acids[il+a];
	}
	return list;
}

int protein_set_base(Protein* s, int i, Amino a){
	s->acids[i] = a;
	return 0;	
}

char* protein_to_string(Protein s){
	char* str = "";
	int i;
	for(i=0;i<s.length;i++){
		str += amino_to_sym(s.acids[i]);
	}
	return str;
}

