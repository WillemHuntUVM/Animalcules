#ifndef DNA_H
#define DNA_H

#define DNA_ADENINE 	0
#define DNA_GUANINE 	1
#define DNA_CYTOSINE 	2
#define DNA_THYMINE 	3
typedef unsigned int DNA_Base;

DNA_Base 	dna_base_get_partner(DNA_Base);
char* 		dna_base_to_string(DNA_Base);
char		dna_base_to_char(DNA_Base);

typedef struct DNA {
	int  length;
	int* bases;
} DNA_Strand;

DNA_Base 	dna_get_base(DNA_Strand, int);
int		dna_set_base(DNA_Strand*, int, DNA_Base);
char*		dna_to_string(DNA_Strand);

#endif
