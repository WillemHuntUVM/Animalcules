#ifndef RNA_H
#define RNA_H

#define RNA_ADENINE 	0
#define RNA_GUANINE 	1
#define RNA_CYTOSINE 	2
#define RNA_URACIL 	3
typedef unsigned int RNA_Base;

RNA_Base 	rna_base_get_partner(RNA_Base);
char* 		rna_base_to_string(RNA_Base);
char		rna_base_to_char(RNA_Base);

typedef struct RNA {
	int  length;
	int* bases;
} RNA_Strand;

RNA_Base 	rna_get_base(RNA_Strand, int);
int		rna_set_base(RNA_Strand*, int, RNA_Base);
char*		rna_to_string(RNA_Strand);

#endif
