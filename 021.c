#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int main()
{
    int dev[20000][2]={0};
    //long** dev=(long**)malloc(sizeof(long*)*MAX*2);
    //for(int i=0;i<2;i++) dev[i]=(long*)malloc(sizeof(long)*2*2);
    
    for(int i=1;i<=MAX;i++)
    {
        dev[i][0]=i;
        int ctr=i;
        ctr/=2;
        int sum=0;
        for(int j=1;j<=ctr;j++)
        {
            if(i%j==0) sum+=j; 
        }
        dev[i][1]=sum;
    }
    int sum=0;
    for(int i=1;i<=MAX;i++) //HERE PROBLEM
    {
        for(int j=i;j<=MAX;i++)
        {
            if(dev[i][0]==dev[j][1]&&dev[i][1]==dev[j][0])
            {
                sum+=(i+j);
            }
        }
    }
}/*
    //for(int i=0;i<2;i++) free(dev[i]);
    //free(dev);
    printf("%d",sum);
}*/
