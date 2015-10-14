/*
  ==============================================================================

    PCB.h

  ==============================================================================
*/

#ifndef PCB_H_INCLUDED
#define PCB_H_INCLUDED

#include <string>
#include "PCBEnums.h"

#define APPLICATION_CLASS
#define SYSTEM_CLASS

class PCB {

public:
	PCB();
	~PCB();

	//Getters:
	std::string getName();
	ProcessClass getProcessClass();
	int getPriority();
	State getState();
	int getMemory();
	//Setters:
	void setName(std::string);
	void setProcessClass(ProcessClass);
	void setPriority(int);
	void setState(State);
	void setMemory(int);
	

private:
	std::string name;
	ProcessClass processClass;
	int priority;
	State state;
	int memory;

};


#endif  // PCB_H_INCLUDED
