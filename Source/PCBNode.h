/*
  ==============================================================================

    PCBNode.h

  ==============================================================================
*/

#ifndef PCBNODE_H_INCLUDED
#define PCBNODE_H_INCLUDED

#include <string>
#include "PCBEnums.h"
#include "PCB.h"

//This method queueing PCBs creates a linked list out of PCBs
class PCBNode {

public:
	PCBNode();
	~PCBNode();

	void setupPCB(std::string, int priority, ProcessClass);

private:
	PCBNode* previousNode;
	PCBNode* nextNode;
	PCB* pcb;

};



#endif  // PCBNODE_H_INCLUDED
