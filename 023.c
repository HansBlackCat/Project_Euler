#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 28123

int pnumChecker(int n);

int main()
{
    int* pNum=(int*)malloc(sizeof(int)*10000*2);
    int* arr=(int*)malloc(sizeof(int)*100000000*2);
    memset(pNum,0,sizeof(int)*10000*2);
    memset(arr,0,sizeof(int)*100000000*2);
    int token=0;
    long tot=0;
    
    for(int i=0;i<MAX;i++)
    {
        if(pnumChecker(i)==2) 
        {
            pNum[token]=i;
            token++;
        }
    }
    printf("%d %d\n",token-1,pNum[token-1]);

    int arr_dir=0;
    int cnt=1;
    while(pNum[cnt]!=0)///
    {
        for(int cnt_f=0;cnt_f<cnt;cnt_f++)
        {
            int sum=pNum[cnt]+pNum[cnt_f];
            int ctr=0;
            if(ctr==0||sum<MAX) 
            {
                arr[arr_dir]=sum;
                arr_dir++;
            }
        }
        cnt++;
    }
    for(int i=0;i<MAX;i++)
    {
        tot+=i;
    }
    printf("%ld\n",tot);
    for(int i=0;i<arr_dir;i++)
    {
        tot-=arr[i];
    }
    printf("%ld\n",tot);

    free(pNum);
    free(arr);
}

int pnumChecker(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) sum+=i;
    }
    if(sum==n) return 0; //perfect
    else if(sum>n) return 2; //abundant
    else return 1; //deficient
}

