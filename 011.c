#include <stdio.h>
#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int buffer[100000]={0};
    FILE* fp=fopen("011_Source.txt","r");
    //fget(buffer,sizeof(buffer),fp); //if meet \n, or read NULL End
    fread(buffer,sizeof(buffer),1,fp); //read anyway, even fail return maxsize-1
    for (int i=0; i<10; i++)
    {
        printf("%d\n",buffer[i]);
        //if(buffer[i]==' '||buffer[i]=='\n') printf("N");
    }
    printf("\n");
    fclose(fp);
    return 0;
}
