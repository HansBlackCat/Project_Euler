#include <stdio.h>
#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS

int main()
{
    char buffer[100000]={0};
    FILE* fp=fopen("011_Source.txt","r");
    //fget(buffer,sizeof(buffer),fp); //if meet \n, or read NULL End
    fread(buffer,sizeof(buffer),1,fp); //read anyway, even fail return maxsize-1
    for (int i=0; i<10; i++)
    {
        printf("%c",buffer[i+55]);
        if(buffer[i+55]==' '||buffer[i+55]=='\n') printf("N");
    }
    for (int j=0; j<10; j++)
    {
        printf("\n%d", buffer[j]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
