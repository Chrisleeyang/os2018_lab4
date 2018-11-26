#ifndef __lib_h__
#define __lib_h__

typedef unsigned int uint32_t;
typedef uint32_t sem_t;
void printf(const char *format,...);
int fork();
void sleep(int time);
void exit();
int sem_init(sem_t* sem,int value);
int sem_post(sem_t* sem);
int sem_wait(sem_t* sem);
int sem_destroy(sem_t* sem);
#endif
