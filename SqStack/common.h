#ifndef _COMMON_H
#define _COMMON_H

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int data_t;
typedef struct
{
	data_t *data;
	int maxlen;
	int top;
}sqstack_t;

int CreateStack(sqstack_t **stack, int size);
void ClearStack(sqstack_t *stack);
int EmptyStack(sqstack_t *stack);
int FullStack(sqstack_t *stack);
int PushStack(sqstack_t *stack, data_t x);
int PopStack(sqstack_t *stack, data_t *x);
int GetTop(sqstack_t *stack, data_t *x);

#endif
