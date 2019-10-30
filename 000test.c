#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ROW 100
#define COLUMN 14
//#define _CRT_SECURE_NO_WARNINGS

int main()
{
    char a='A';
    char b='B';
    printf("%d\n",(int)a);
    if((int)a>(int)b) printf("a>b\n");
    else if((int)a==(int)b) printf("a==b\n");
    else printf("a<b\n");
}
