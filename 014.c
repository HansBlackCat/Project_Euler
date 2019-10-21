#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define CACHE_SIZE 1000000
#define MAX 4256
int MALLOC_SIZE=sizeof(long int)*(CACHE_SIZE)*2;
int fuc_Collatz(int n);

void main()
{
    long int* cache=(long int*)malloc(MALLOC_SIZE);
    memset(cache,0,MALLOC_SIZE);
    int ctr_max=0, num=0, ctr=0;
    
    for(int i=1;i<=MAX;i++)
    {
        printf("#%d\n",i);
        int ctr=0;
        int n=i;
        while(n!=1)
        {
            if(i%2==0) break;
            /*if(cache[n]!=0) 
            {
                ctr=ctr+cache[n];
                break;
            }*/
            else 
            {
                if(n%2==0) n=n/2;
                else n=3*n+1;
            }
            ctr++;
        }
        //cache[n]=ctr;

        if(ctr>ctr_max)
        {
            num=i;
            ctr_max=ctr;
            printf("%d %d\n",num,ctr);
        }
    }
    printf("# is %d, ctr is %d\n",num,ctr_max);
}

/*int fuc_Collatz(int n) //Collatz function)
{
    int ctr=0; //counter
    int n_temp=n; //ipt n-value
    while(n!=1)
    {
        if(cache[n]!=0) break; //check cache data 
        else //actual calculating
        {
            if(n%2==0) n=n/2;
            else n=3*n+1;
        }
        ctr++; 
    }
    ctr=ctr+cache[n];
    cache[n_temp]=ctr;
    return ctr;
}*/
