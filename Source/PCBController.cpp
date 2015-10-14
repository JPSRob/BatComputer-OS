/*
  ==============================================================================

    PCBController.cpp

  ==============================================================================
*/

#include "PCBController.h"

PCBController::PCBController()
{
}

PCBController::~PCBController()
{
}


//Functions:
PCB * PCBController::allocatePCB()
{
	PCB* newPCB;

	try {
		newPCB = new PCB();
	}
	catch (std::exception& e) {
		newPCB = NULL;
	}

	return newPCB;
}

bool PCBController::freePCB(PCB * passedPCB)
{
	if (passedPCB != NULL) {
		delete passedPCB;
		return true;
	}
	else {
		return false;
	}
}





bool PCBController::insertPCB(PCB * passedPCB)
{
	//Switch statement first, to determine which queue the new PCB should be inserted into
	switch (passedPCB->getState()) {
	case READY:
		readyQueue.insertNode(passedPCB);
		return true;
		break;
	case SUSPENDED_READY:
		suspendedReadyQueue.insertNode(passedPCB);
		return true;
		break;
	case BLOCKED:
		blockedQueue.insertNode(passedPCB);
		return true;
		break;
	case SUSPENDED_BLOCKED:
		suspendedBlockedQueue.insertNode(passedPCB);
		return true;
		break;
	default:
		return false;
		break;
	}
}

bool PCBController::removePCB(PCB *)
{

	return false;
}
