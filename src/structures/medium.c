#include <string.h>
#include "medium.h"

int medium_add_substance(Medium* m, Substance s, double volume){
	int i;
	//Check existing components for match
	for(i=0;i<m->component_count;i++){
		if(m->components[i].substance == s){
			m->components[i].volume += volume;
			m->total_volume += volume;
			return 0;
		}
	}

	//No existing match
	Component* c = (Component*) malloc(sizeof(Component));
	c->substance = s;
	c->volume = volume;

	m->components[m->component_count] = c;
	m->total_volume += volume;

	return 0;
}	

int medium_drain_amount(Medium* m, double volume){
	double percentage_drain = volume / m->volume;
	double drain_factor = 1.0 - percentage_drain;
	int i;
	Component* c;
	for(i = 0; i < m->component_count; i++){
		c = m->components[i];
		c->volume = c->volume * drain_factor;
	}
	m->total_volume -= volume;
	return 0;
}

double medium_get_substance_percentage(Medium* m, Substance s){
	double total = m->total_volume;
	int i;
	Component* c;
	for(i = 0; i < m->component_count; i++){
		c = m->components[i];
		if(c->substance == s){
			return (total / c->volume);
		}
	}
	return 0.0;
}

double medium_get_substance_volume(Medium* m, Substance s){
	int i;
	Component* c;
	for(i = 0; i < m->component_count; i++){
		c = m->components[i];
		if(c->substance == s){
			return c->volume;
		}
	}
	return 0.0;
}
