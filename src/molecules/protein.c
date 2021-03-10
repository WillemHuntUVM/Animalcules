#include <stdlib.h>
#include "protein.h"

char amino_to_char(Amino_Acid a){	
	switch (a) {
		case AMINO_ALANINE:
			return 'A';
			break;
		case AMINO_CYSTEINE:
			return 'C';
			break;
		case AMINO_ASPARTIC_ACID:
			return 'D';
			break;
		case AMINO_GLUTAMIC_ACID:
			return 'E';
			break;
		case AMINO_PHENYLALANINE:
			return 'F';
			break;
		case AMINO_GLYCINE:
			return 'G';
			break;
		case AMINO_HISTIDINE:
			return 'H';
			break;
		case AMINO_ISOLEUCINE:
			return 'I';
			break;
		case AMINO_LYSINE:
			return 'K';
			break;
		case AMINO_LEUCINE:
			return 'L';
			break;
		case AMINO_METHIONINE:
			return 'M';
			break;
		case AMINO_ASPARAGINE:
			return 'N';
			break;
		case AMINO_PROLINE:
			return 'P';
			break;
		case AMINO_GLUTAMINE:
			return 'Q';
			break;
		case AMINO_ARGININE:
			return 'R';
			break;
		case AMINO_SERINE:
			return 'S';
			break;
		case AMINO_THREONINE:
			return 'T';
			break;
		case AMINO_TRYPTOPHAN:
			return 'W';
			break;
		case AMINO_TYROSINE:
			return 'Y';
			break;
		case AMINO_VALINE:
			return 'V';
			break;
	}
	return '_';
}

char* amino_to_sym(Amino_Acid a){
	switch (a) {
		case AMINO_ALANINE:
			return "ala";
			break;
		case AMINO_CYSTEINE:
			return "cys";
			break;
		case AMINO_ASPARTIC_ACID:
			return "asp";
			break;
		case AMINO_GLUTAMIC_ACID:
			return "glu";
			break;
		case AMINO_PHENYLALANINE:
			return "phe";
			break;
		case AMINO_GLYCINE:
			return "gly";
			break;
		case AMINO_HISTIDINE:
			return "his";
			break;
		case AMINO_ISOLEUCINE:
			return "ile";
			break;
		case AMINO_LYSINE:
			return "lys";
			break;
		case AMINO_LEUCINE:
			return "leu";
			break;
		case AMINO_METHIONINE:
			return "met";
			break;
		case AMINO_ASPARAGINE:
			return "asn";
			break;
		case AMINO_PROLINE:
			return "pro";
			break;
		case AMINO_GLUTAMINE:
			return "gln";
			break;
		case AMINO_ARGININE:
			return "arg";
			break;
		case AMINO_SERINE:
			return "ser";
			break;
		case AMINO_THREONINE:
			return "thr";
			break;
		case AMINO_TRYPTOPHAN:
			return "trp";
			break;
		case AMINO_TYROSINE:
			return "tyr";
			break;
		case AMINO_VALINE:
			return "val";
			break;
	}
	return "_";
}

Amino_Acid	protein_get_base(Protein_Strand s, int i){
	return s.acids[i];
}

Amino_Acid*	protein_get_bases(Protein_Strand s, int il, int ir){
	Amino_Acid* list = (Amino_Acid*) malloc(sizeof(int)*(il-ir));
	int len = il - ir;
	int a;
	for(a=0;a<len;a++){
		list[a] = s.acids[il+a];
	}
	return list;
}

int protein_set_base(Protein_Strand* s, int i, Amino_Acid a){
	s->acids[i] = a;
	return 0;	
}

char* protein_to_string(Protein_Strand s){
	char* str = "";
	int i;
	for(i=0;i<s.length;i++){
		str += amino_to_sym(s.acids[i]);
	}
	return str;
}

