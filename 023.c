#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 28123

int pnumChecker(int n);

int main()
{
    int* pNum=(int*)malloc(sizeof(int)*10000*2); //abundant # collect array
    int* arr=(int*)malloc(sizeof(int)*100000000*2); //sum of two abundant # array
    memset(pNum,0,sizeof(int)*10000*2);
    memset(arr,0,sizeof(int)*100000000*2);
    int token=0; //prefect # checker's token
    long tot=0; //ans
    
    for(int i=0;i<MAX;i++) //check if it's abundant #
    {
        if(pnumChecker(i)==2) 
        {
            pNum[token]=i;
            token++;
        }
    }

    int arr_dir=0;
    int cnt=0;
    while(pNum[cnt]!=0) //sum of two abundant
    {
        for(int cnt_f=0;cnt_f<=cnt;cnt_f++)
        {
            int sum=pNum[cnt]+pNum[cnt_f];
            if(sum<MAX) 
            {
                arr[arr_dir]=sum;
                arr_dir++;
            }
        }
        cnt++;
    }

    int tot_arr[MAX]={0}; //fill array with value==subscript
    for(int i=0;i<MAX;i++)
    {
        tot_arr[i]=i;
    }
    for(int i=0;i<arr_dir;i++) //make tot_arr[i] 0, if there are same # in sum dictionary
    {
        int dic_temp=arr[i];
        tot_arr[dic_temp]=0;
    }
    
    int tot_sum=0;
    for(int i=0;i<MAX;i++)
    {
        tot_sum+=tot_arr[i];
    }
    printf("%d\n",tot_sum);

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

