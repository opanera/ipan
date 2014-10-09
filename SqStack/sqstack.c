#include "common.h"

int CreateStack(sqstack_t **stack, int size)
{
	*stack = (sqstack_t*)malloc(sizeof(sqstack_t));
	if(! *stack)
	{
		printf("malloc error!\n");
		return FALSE;
	}
	(*stack)->data = (data_t*)malloc(sizeof(data_t)*size);
	if(! (*stack)->data)
	{
		printf("malloc error!\n");
		return FALSE;
	}
	(*stack)->maxlen = size;
	(*stack)->top = 0;
	
	return TRUE;
}
void ClearStack(sqstack_t *stack)
{
	stack->top = 0;
}
int EmptyStack(sqstack_t *stack)
{
	return stack->top == 0 ? TRUE : FALSE;
}
int FullStack(sqstack_t *stack)
{
	return stack->top == stack->maxlen ? TRUE : FALSE;
}
int PushStack(sqstack_t *stack, data_t x)
{
	if(FullStack(stack))
	{
		printf("stack is full!\n");
		return FALSE;
	}
	stack->data[stack->top] = x;
	stack->top++;
	
	return TRUE;
}
int PopStack(sqstack_t *stack, data_t *x)
{
	if(EmptyStack(stack))
	{
		printf("stack is empty!\n");
		return FALSE;
	}
	stack->top--;
	*x = stack->data[stack->top];
	return TRUE;
}
int GetTop(sqstack_t *stack, data_t *x)
{
	if(EmptyStack(stack))
	{
		printf("stack is empty!\n");
		return FALSE;
	}
	*x = stack->data[stack->top-1];
	return TRUE;
}
void DisplayStack(sqstack_t *stack)
{
	int i = stack->top-1;
	while(i >= 0)
	{
		printf("%d,",stack->data[i]);
		--i;
	}
	printf("\n");
}
