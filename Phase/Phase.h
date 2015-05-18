#ifndef PHASE_H
#define PHASE_H

#include "Arduino.h"
#include "Quantity.h"
#include "String.h"

class Phase{
public:
	Phase(String n, unsigned int v, unsigned int i);
	void clear();
	
	void sampleSignal();
	void getValues();

	void getName();
	void getPort();
	void getRMS();
	void getPeriod();
	signed long getDelay(); 
	void printDelay();
	
private:
	String name;
	Quantity voltage;
	Quantity current;
	// double delay; // delay between voltage and current
	signed long delay; // temporary; will be double eventually
	signed long delaysum;
	unsigned int numsamples;
};

#endif