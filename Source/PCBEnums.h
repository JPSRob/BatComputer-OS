/*
  ==============================================================================

    PCBEnums.h

  ==============================================================================
*/

#ifndef PCBENUMS_H_INCLUDED
#define PCBENUMS_H_INCLUDED

enum ProcessClass {
	APPLICATION_CLASS,
	SYSTEM_CLASS
};

enum State {
	READY,
	SUSPENDED_READY,
	BLOCKED,
	SUSPENDED_BLOCKED,
	RUNNING
};



#endif  // PCBENUMS_H_INCLUDED
