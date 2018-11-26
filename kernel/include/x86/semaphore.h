#ifndef __SEMAPHORE_H__
#define __SEMAPHORE_H__

#include <common.h>
#include "memory.h"
struct Semaphore{
	int value;
	int cnt;
	struct ProcessBlock* queue[10];
};

struct Semaphore semlist[10];
void* begin_sem_addr;
void* end_sem_addr;

#endif


