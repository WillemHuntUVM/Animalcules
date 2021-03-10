#ifndef MEDIUM_H
#define MEDIUM_H

#define MEDIUM_STATUS_EMPTY 0
#define MEDIUM_STATUS_FILLED 1

typedef char* Substance;

struct typedef component_struct {
	Substance 	substance;
	int		volume;
} Component;

struct typedef medium_struct {
	Component** 	components;
	int 		component_count;
	int 		total_volume;
	int 		capacity;
} Medium;

int medium_add_substance(Medium*, Substance, int);
int medium_drain_amount(Medium*, int);
int medium_get_substance_percentage(Substance);
int medium_get_substance_volume(Substance);

#endif
