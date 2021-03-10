#ifndef PROTEIN_H
#define PROTEIN_H

#define AMINO_ALANINE 		0
#define AMINO_CYSTEINE 		1
#define AMINO_ASPARTIC_ACID 	2
#define AMINO_GLUTAMIC_ACID	3
#define AMINO_PHENYLALANINE	4
#define AMINO_GLYCINE		5
#define AMINO_HISTIDINE		6
#define AMINO_ISOLEUCINE	7
#define AMINO_LYSINE		8
#define AMINO_LEUCINE		9
#define AMINO_METHIONINE	10
#define AMINO_ASPARAGINE	11
#define AMINO_PROLINE		12
#define AMINO_GLUTAMINE		13
#define AMINO_ARGININE		14
#define AMINO_SERINE		15
#define AMINO_THREONINE		16
#define AMINO_TRYPTOPHAN	17
#define AMINO_TYROSINE		18
#define AMINO_VALINE		19

typedef unsigned int Amino_Acid;
char 	amino_to_char(Amino_Acid);
char* 	amino_to_sym(Amino_Acid);
//char* 	amino_to_string(Amino_Acid); You can't make me

typedef struct Protein {
	int length;
	Amino_Acid* acids;	
} Protein_Strand;

Amino_Acid 	protein_get_base(Protein_Strand, int);
Amino_Acid* 	protein_get_bases(Protein_Strand, int, int);
int 		protein_set_base(Protein_Strand*, int, Amino_Acid);
int		protein_append_base(Protein_Strand*, Amino_Acid);
int 		protein_insert_base(Protein_Strand*, Amino_Acid);
int 		protein_append_sequence(Protein_Strand*, Amino_Acid*, int);
int 		protein_insert_sequence(Protein_Strand*, Amino_Acid*, int);

char* 		protein_to_string(Protein_Strand);
#endif
