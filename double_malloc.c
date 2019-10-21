#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int** a=(int**)malloc(sizeof(int*)*10);
    for(int i=0;i<10;i++)
    {
        a[i]=(int*)malloc(sizeof(int)*10);
    }
    //a[10][10]
    free(a);
}
