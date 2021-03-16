#ifndef RNA_H
#define RNA_H

typedef enum RNA_Base_Struct {
	ADENINE,
	GUANINE,
	CYTOSINE,
	URACIL
} RNA_Base;

RNA_Base 	rna_base_get_partner(RNA_Base);
char* 		rna_base_to_string(RNA_Base);
char		rna_base_to_char(RNA_Base);

typedef struct RNA_Struct {
	int  length;
	int* bases;
} RNA;

RNA_Base 	rna_get_base(RNA, int);
int		rna_set_base(RNA*, int, RNA_Base);
char*		rna_to_string(RNA);

#endif
