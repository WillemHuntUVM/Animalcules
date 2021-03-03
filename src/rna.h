#ifndef RNA_H
#define RNA_H

#define RNA_ADENINE 	0
#define RNA_GUANINE 	1
#define RNA_CYTOSINE 	2
#define RNA_URACIL 	3
typedef unsigned int RNA_Base;

RNA_Base 	get_partner(RNA_Base);
char* 		to_string(RNA_Base);
char*		to_char(RNA_Base);

typedef struct RNA {
	int length;
	int *bases;
} RNA_Strand;

RNA_Base 	get_base(*RNA_Strand, int);
int		set_base(*RNA_Strand, int, RNA_Base);
char*		to_string(*RNA_Strand);

#endif
