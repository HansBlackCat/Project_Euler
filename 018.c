/*
 * Need ./018<018_Source.txt to scanf
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //need -lm
#define MAX 16384
unsigned binNum(unsigned n,unsigned m);

int main()
{
    int sum[20000]={0};
    int a[20][20]={0};
    for(int i=0;i<15;i++)
    {
        for(int j=0;j<=i;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    //iiiii - iiiij - iiiji -iiijj -iijii - ...
    int bin=0b00000000000000;
    int w_ctr=0;
    int maxCtr=0;
    for(int K=0;K<MAX;K++)
    {
        int parA=0,parB=0;
        for(int i=0;i<14;i++)
        {
            if(binNum(bin,13-i)==1) 
            {   
                parA++;
                parB++;
            }
            else parA++;
            sum[w_ctr]+=a[parA][parB];
        }
        sum[w_ctr]+=75;
        if(sum[w_ctr]>maxCtr)
        {
            maxCtr=sum[w_ctr];    
        }
        printf("%d\n",sum[w_ctr]);
        w_ctr++;
        bin+=1;
    }
    printf("%d",maxCtr);
}

unsigned binNum(unsigned n,unsigned m) //read from right to left, m in 0~14
{
    unsigned bin_1=0b1;
    n=n>>m;
    return (bin_1&n);
}
