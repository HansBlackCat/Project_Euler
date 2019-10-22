#include <stdio.h>
#include <stdlib.h>
#define NUM_UNDER 10000

int main()
{
    long dev[20000][2]={0}; //arg1 - n, arg2 - sum of devisor of n
    //long** dev=(long**)malloc(sizeof(long*)*1000*2);
    //for(int i=0;i<2;i++) dev[i]=(long*)malloc(sizeof(long)*2*2);

    for(int i=1;i<=NUM_UNDER;i++)
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
}
