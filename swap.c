#include <stdio.h>

void swap(int* x,int* y)
{
    int z=*x;
    z=*x;
    *x=*y;
    *y=z;
}

int main()
{
    int a=3;
    int b=5;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
}
