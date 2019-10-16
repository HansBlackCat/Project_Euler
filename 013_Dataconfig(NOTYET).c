#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARR_FULL 5010
#define ARR_SRT 105
#define BUFF 2
int MALLOC_SIZE=sizeof(char)*ARR_FULL*BUFF;
int OPT_SIZE=sizeof(char)*2000*BUFF;

int fileToken(char* src[], char* ipt);

void main()
{
    char* ipt=(char*)malloc(MALLOC_SIZE);
    char* src=(char*)malloc(OPT_SIZE);
    char** src_ptr;
    int tokCounter;
    FILE* file_key;
    file_key=fopen("013_Source.txt","r");

    //int arr[2010];
    
    while(fgets(ipt,MALLOC_SIZE,file_key))
    {
        tokCounter=fileToken(src_ptr,ipt);
    }
    for(int i=0; i<tokCounter; i++) printf("%s\n",src_ptr[i]);

    fclose(file_key);
    free(ipt);
    free(src);
}

int fileToken(char* src[], char* ipt) //Tokenize function
{
    int i=0; //counter
    char* ptr=strtok(ipt,"\n"); //first-tokenize
    
    while(ptr!=NULL) //repeat-tokenize with NULL(which tells the functino to continue tokenize)
    {
        src[i]=ptr;
        ptr=strtok(NULL,"\n");
        printf("%s\n",ptr);
        i++;
    }
    return i;
}

























