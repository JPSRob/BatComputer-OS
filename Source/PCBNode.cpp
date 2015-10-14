/*
  ==============================================================================

    PCBNode.cpp

  ==============================================================================
*/

#include "PCBNode.h"

PCBNode::PCBNode()
{
}

PCBNode::~PCBNode()
{
}

void PCBNode::setupPCB(std::string passedName, int passedPriority, ProcessClass passedClass)
{
	pcb->setName(passedName);
	pcb->setPriority(passedPriority);
	pcb->setProcessClass(passedClass);
}