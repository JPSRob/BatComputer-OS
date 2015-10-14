/*
  ==============================================================================

    PCBQueue.h

  ==============================================================================
*/

#ifndef PCBQUEUE_H_INCLUDED
#define PCBQUEUE_H_INCLUDED

#include <string>
#include "PCBNode.h"

class PCBQueue {

public:
	PCBQueue();
	~PCBQueue();

	void insertNode(PCB*);
	void removeNode(PCB*);
	PCB* findPCB(std::string);
	
private:
	int nodeCount;
	PCBNode* head;
	PCBNode* tail;

};



#endif  // PCBQUEUE_H_INCLUDED
