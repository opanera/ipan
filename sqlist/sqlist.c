#include "common.h"

sqlink CreatList()
{
    sqlink list = malloc(sizeof(sqlist));
    if(list == NULL)
    {
        printf("CreatList error!\n");
        exit(EXIT_FAILURE);
    }
    list->last = 0;
	
	return list;
}
void ClearList(sqlink list)
{
    list->last = 0;
}
int EmptyList(sqlink list)
{
    return list->last == 0 ? 1 : 0;
}
int FullList(sqlink list)
{
    return list->last == sizeof(list->data)/sizeof(list->data[0]) ? 1 : 0;
}
int LengthList(sqlink list)
{
    return list->last;
}
data_t GetList(sqlink list, int i)
{
    if(1 <= i && i <= list->last)
    return list->data[i-1];
}
int LocateList(sqlink list, data_t x)
{
    int i = 0;
    for(i; i < list->last; i++)
    {
        if(list->data[i] == x)
        {
            return i+1;
        }
    }

    return -1;
}
int InsertList(sqlink list, data_t x, int i)//插在第i个元素处
{
    if(FullList(list))
    {
        printf("List is full!\n");
        return FALSE;
    }
    if(i<1 || i>list->last+1)
    {
        printf("i is wrong!\n");
        return FALSE;
    }

    int j;
    for(j = list->last-1; j>=i-1; j--)
    {
        list->data[j+1] = list->data[j];
    }
    list->data[i-1] = x;
    list->last++;

    return TRUE;    
}
int DeleteList(sqlink list, int i)
{
    
    if(EmptyList(list))
    {
        printf("List is empty!\n");
        return FALSE;
    }
    if(i<1 || i>list->last)
    {
        printf("i is wrong!\n");
        return FALSE;
    }

    int j;
    for(j=i-1; j < list->last-1; j++)
    {
        list->data[j] = list->data[j+1];
    }
    list->last--;

    return TRUE;
}
void DisplayList(sqlink list)
{
    int i;
    for(i = 0; i < list->last; i++)
    {
        printf("%d,",list->data[i]);
    }
    printf("\n");
}
