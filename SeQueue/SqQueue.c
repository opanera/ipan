//顺序循环队列，按规定一
#include "common.h"

sequeue_t *CreatSequeue(int size)
{
	sequeue_t *q = (sequeue_t *)malloc(sizeof(sequeue_t));
	q->data = (data_t*)malloc(sizeof(data_t)*size);
	q->size = size;
	q->front = q->rear = 0;
	
	return q;
}
void ClearSequeue(sequeue_t *sq)
{
	sq->front = sq->rear = 0;

}
int EmptySequeue(sequeue_t *sq)
{
	return sq->front==sq->rear ? TRUE : FALSE;
}
int FullSequeue(sequeue_t *sq)
{
	return sq->front == (sq->rear+1) % sq->size ? TRUE : FALSE;
}
int EnQueue(sequeue_t *sq, data_t x)
{
	if(FullSequeue(sq))
	{
		printf("squeue is full!\n");
		return FALSE;
	}
	sq->rear = (sq->rear+1) % sq->size;
	sq->data[sq->rear] = x;
	
	return TRUE;
}
int DeQueue(sequeue_t *sq, data_t *x)
{
	if(EmptySequeue(sq))
	{
		printf("queue is empty!\n");
		return FALSE;
	}
	sq->front = (sq->front+1) % sq->size;
	*x = sq->data[sq->front];
	
	return TRUE;
}
int GetTop(sequeue_t *sq, data_t *x)
{
	if(EmptySequeue(sq))
	{
		printf("queue is empty!\n");
		return FALSE;
	}	
	*x = sq->data[(sq->front+1)%sq->size];
	
	return TRUE;
}
void DisplayQueue(sequeue_t *sq)
{
	int i;
	for(i = sq->front; i != sq->rear; i = (i+1)%(sq->size))
	{
		printf("%d,",sq->data[i+1]);
	}
	printf("\n");
}
