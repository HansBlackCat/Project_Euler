#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bin_add(int*);

int main()
{
    int* sum=(int*)malloc(sizeof(int)*100000000*2);
    memset(sum,0,sizeof(int)*100000000*2);
    char arr[20000]={-1};
    FILE* fp=fopen("008_source.txt","r");
    fread(arr,sizeof(arr),1,fp);
    char mat[20][51]={0};

    int cnr=0;
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 50; ++j) {
            if((int)arr[cnr]==10) cnr++; 
            mat[i][j]=arr[cnr];
            cnr++;
        }
    }
    
    int bin_all[8][3]={0};
    for (int i = 1; i < 8; ++i) {
        for (int j = 0; j < i; ++j) {
            bin_add(bin_all[i]);
        }
    }
    /*Mult*/
    int sum_cnr=0;
    for (int i = 0; i < 20/*20*/; ++i) {
        for (int j = 0; j < 50/*50*/; ++j) {
            for (int k = 0; k < 8; ++k) {
                sum[sum_cnr]=(int)mat[i][j]-'0';
                int i_temp=i,j_temp=j;
                for (int h = 0; h < 3; ++h) {
                    if ((i_temp+1)<20&&bin_all[k][h]==0) {
                        i_temp++;
                        sum[sum_cnr]*=(int)(mat[i_temp][j_temp]-'0');
                    }
                    else if ((j_temp+1)<50&&bin_all[k][h]==1){
                        j_temp++;
                        sum[sum_cnr]*=(int)(mat[i_temp][j_temp]-'0');
                    }
                    else sum[sum_cnr]=0;
                }
                sum_cnr++;
            }
        }
    }

    /*Bubble Sort*/
    for (int i = 0; i < 8000; ++i) {
        for (int j = 0; j < 8000; ++j) {
            int sort_temp=0;
            if (sum[j]<sum[j+1]) {
                sort_temp=sum[j+1];
                sum[j+1]=sum[j];
                sum[j]=sort_temp;    
            }

        }
    }
    
    int wle_cnr=0;
    int wle_spc=0;
    while(wle_spc<30) {
        if (sum[wle_cnr]!=sum[wle_cnr+1]) {
            printf("%d\n", sum[wle_cnr]);
            wle_spc++;
        }
        wle_cnr++;
    }
    
    free(sum);
}

void bin_add(int* arr)
{
    arr[0]+=1;
    for (int i=0;i<3;i++){
        if (arr[i]>1) {
            arr[i]=0;
            arr[i+1]+=1;
        }
    }
}
