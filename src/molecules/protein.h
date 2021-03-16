#ifndef PROTEIN_H
#define PROTEIN_H

typedef enum Amino_Enum {
	ALANINE,
	CYSTEINE,
	ASPARTIC_ACID,
	GLUTAMIC_ACID,
	PHENYLALANINE,
	GLYCINE,
	HISTIDINE,
	ISOLEUCINE,
	LYSINE,
	LEUCINE,
	METHIONINE,
	ASPARAGINE,
	PROLINE,
	GLUTAMINE,
	ARGININE,
	SERINE,
	THREONINE,
	TYROSINE,
	VALINE
} Amino;

char 	amino_to_char(Amino);
char* 	amino_to_sym(Amino);
//char* 	amino_to_string(Amino); You can't make me

typedef struct Protein_Struct {
	int length;
	Amino* acids;	
} Protein;

Amino 		protein_get_base(Protein, int);
Amino* 		protein_get_bases(Protein, int, int);
int 		protein_set_base(Protein*, int, Amino);
int		protein_append_base(Protein*, Amino);
int 		protein_insert_base(Protein*, Amino);
int 		protein_append_sequence(Protein*, Protein, int);
int 		protein_insert_sequence(Protein*, Protein, int);

char* 		protein_to_string(Protein);
#endif
