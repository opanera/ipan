#ifndef _COMMON_H
#define _COMMON_H

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define N 5

typedef int data_t;
typedef struct
{
	data_t *data;
	int size;
	int rear, front;
}sequeue_t;

sequeue_t *CreatSequeue(int size);
void ClearSequeue(sequeue_t *sq);
int EmptySequeue(sequeue_t *sq);
int FullSequeue(sequeue_t *sq);
int EnQueue(sequeue_t *sq, data_t x);
int DeQueue(sequeue_t *sq,data_t *x);
int GetTop(sequeue_t *sq, data_t *x);
void DisplayQueue(sequeue_t *sq);

#endif
