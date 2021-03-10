#ifndef MEDIUM_H
#define MEDIUM_H

typedef char* Substance;

struct typedef component_struct {
	Substance 	substance;
	double		volume;
} Component;

struct typedef medium_struct {
	Component** 	components;
	int 		component_count;
	double 		total_volume;
	double		capacity;
} Medium;

int medium_add_substance(Medium*, Substance, double);
int medium_drain_amount(Medium*, double);
double medium_get_substance_percentage(Medium*, Substance);
double medium_get_substance_volume(Medium*, Substance);

#endif
