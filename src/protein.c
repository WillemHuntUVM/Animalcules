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
