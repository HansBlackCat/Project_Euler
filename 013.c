#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARR_FULL 5010
#define ARR_SRT 105
#define BUFF 2
int MALLOC_SIZE=sizeof(char)*ARR_FULL*BUFF;
int fileToken(char* src[], char* ipt);

void main()
{
    char* ipt=(char*)malloc(MALLOC_SIZE);
    FILE* file_key;
    file_key=fopen("013_Source.txt","r");

    int arr[2010];
    
    for(int i=0;i<2000;i++) fscanf(file_key,"%d",&arr[i]);
    for(int i=0;i<2000;i++) printf("# is: %d\n",arr[i]);

    fclose(file_key);
}

int fileToken(char* srci[], char* ipt)
{
    int i=0;
    char* ptr=strtok(ipt,"\n");
    
    while(ptr!=NULL)
    {
        src[i]=ptr;
        ptr=strtok(NULL,";");
        i++
    }
    return i;
}

























