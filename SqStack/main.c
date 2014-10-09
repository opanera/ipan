#include "common.h"

int main(int argc, char *argv[])
{
	int i = 1;
	data_t data;
	sqstack_t *stack = NULL;
	CreateStack(&stack, 5);
	while(i <= 5)
	{
		PushStack(stack, i);
		i++;
	}
	DisplayStack(stack);
	PopStack(stack, &data);
	DisplayStack(stack);
	GetTop(stack, &data);
	printf("%d\n",data);
	return 0;
}
