#include "common.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 1;
    sqlink list = NULL;
    list = CreatList();
    
    while(i<=6)
    {
        InsertList(list, i, i);
        i++;
    }
    DisplayList(list);
    DeleteList(list, 3);
    DisplayList(list);
}
