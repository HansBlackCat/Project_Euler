#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define POWNUM 1000

int main()
{
    int num[100]={0}; //10^8 for each cell
    num[0]=1;    
    int sum=0;
    int powr[10]={0};
    powr[0]=1;

    for(int i=0;i<POWNUM;i++)
    {
        for(int j=0;j<100;j++) num[j]*=2;
        for(int j=0;j<100;j++)
        {
            if(j!=99&&num[j]>=100000000) 
            {
                num[j]=num[j]%100000000;
                num[j+1]+=1;
            }
        }
    }
    
    for(int k=0;k<100;k++)
    {
        if(num[99-k]!=0) printf("%d ",num[99-k]);
        for(int h=0; h<8;h++)
        {
            sum+=num[99-k]/(int)pow(10,h)%10;
        }
    }
    printf("\n%d\n",sum);
    
}
