/*
  ==============================================================================

    PCBController.h
    
  ==============================================================================
*/

#ifndef PCBCONTROLLER_H_INCLUDED
#define PCBCONTROLLER_H_INCLUDED

#include <string>
#include "PCBEnums.h"
#include "PCBQueue.h"
#include "PCBNode.h"
#include "PCB.h"

//Class will handle all queues and PCB functions
class PCBController {

public:
	PCBController();
	~PCBController();

	//PCB Functions:
	PCB* allocatePCB();
	bool freePCB(PCB*);
	
	
	bool insertPCB(PCB*); //checks for queue to insert PCB into
	bool removePCB(PCB*);

private:
	PCBQueue readyQueue;
	PCBQueue suspendedReadyQueue;
	PCBQueue blockedQueue;
	PCBQueue suspendedBlockedQueue;
	PCBQueue runningQueue;

};

#endif  // PCBCONTROLLER_H_INCLUDED
