#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define CACHE_SIZE 1000000
#define MAX 1000000
int MALLOC_SIZE=sizeof(long int)*(CACHE_SIZE)*2;
int fuc_Collatz(int n);

void main()
{
    long int* cache=(long int*)malloc(MALLOC_SIZE);
    memset(cache,0,MALLOC_SIZE);
    long long int ctr_max=0, num=0, ctr=0;
    
    for(int i=1;i<=MAX;i++)
    {
        printf("#%d\n",i);
        long long int ctr=1;
        long long int n=i;
        while(n!=1)
        {
            
            if(n%2==0) n=n/2;
            else n=3*n+1;
            ctr++;
        }
        if(ctr>ctr_max)
        {
            num=i;
            ctr_max=ctr;
            printf("%lld %lld\n",num,ctr);
        }
    }
    printf("# is %lld, ctr is %lld\n",num,ctr_max);
    free(cache);
}
