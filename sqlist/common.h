#ifndef _COMMON_H
#define _COMMON_H

#include <stdio.h>
#include <stdlib.h>

#define N 5
#define TRUE 1
#define FALSE 0

typedef int data_t;
typedef struct
{
    data_t data[N];
    int last;//表示表长
}sqlist, *sqlink;

void CreatList(sqlink *list);
void ClearList(sqlink list);
int EmptyList(sqlink list);
int FullList(sqlink list);
int LengthList(sqlink list);
data_t GetList(sqlink list, int i);//取第i个元素值
int LocateList(sqlink list, data_t data);
int InsertList(sqlink list, data_t data, int i);//插在第i个元素前面
int DeleteList(sqlink list, int i);
void DisplayList(sqlink list);

#endif
