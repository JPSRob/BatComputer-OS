/*
  ==============================================================================

    PCB.cpp

  ==============================================================================
*/

#include "PCB.h"

PCB::PCB()
{
}

PCB::~PCB()
{
}

std::string PCB::getName()
{
	return name;
}

ProcessClass PCB::getProcessClass()
{
	return ProcessClass();
}

int PCB::getPriority()
{
	return priority;
}

State PCB::getState()
{
	return State();
}

int PCB::getMemory()
{
	return memory;
}

void PCB::setName(std::string passedName)
{
	name = passedName;
}

void PCB::setProcessClass(ProcessClass passedClass)
{
	processClass = passedClass;
}

void PCB::setPriority(int passedPriority)
{
	priority = passedPriority;
}

void PCB::setState(State passedState)
{
	state = passedState;
}

void PCB::setMemory(int passedMemory)
{
	memory = passedMemory;
}
