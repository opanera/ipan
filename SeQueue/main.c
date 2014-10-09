#include "common.h"

int main(int argc, char *argv[])
{
	int i = 1;
	data_t ret;
	sequeue_t *sq = CreatSequeue(5);
	while(i <= 5)
	{
		EnQueue(sq, i);
		i++;
	}
	DisplayQueue(sq);
	DeQueue(sq, &ret);
	DisplayQueue(sq);
	return 0;
}
