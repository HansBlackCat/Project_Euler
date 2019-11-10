#include <stdio.h> // <022_names.txt
#include <stdlib.h>
#include <string.h>
#include <math.h> //-lm

int main()
{
    char str[10000][30];
    int ctr_1=0, ctr_2=0;
    char temp='&';
    char Q='\"';

    while(temp!=EOF)
    {
        temp=getchar();
        if(temp==Q) continue;

        if(temp!=',') 
        {
            str[ctr_1][ctr_2]=temp;
            ctr_2++;
        }
        else 
        {
            ctr_1++;
            ctr_2=0;
        }
    }
    printf("I/O Finished\n");
    //MAX Circul == ctr_1-1
    printf("%s\n%s\n%s\n",str[ctr_1-1],str[ctr_1],str[ctr_1+1]);
    
    for(int i=0;i<ctr_1;i++) // bubble swap - need maximun N's circle
    {
        for(int s=0;s<ctr_1-1;s++) // comparison btw - arg1 s & s+1
        {
            int ckr_1=0,ckr_2=0;
            int digit_Max=5;
            if((int)str[s][0]<(int)str[s+1][0]) continue;
            else if((int)str[s][0]>(int)str[s+1][0]) ckr_2--;
            else
            {
                for(int ckr_c=0;ckr_c<digit_Max;ckr_c++)
                {
                    if((int)str[s][ckr_c]>(int)str[s+1][ckr_c]) ckr_1+=pow(2,digit_Max-ckr_c);
                    else if((int)str[s][ckr_c]==(int)str[s+1][ckr_c]) {}
                    else ckr_2+=pow(2,digit_Max-ckr_c);
                }
            }
            printf("#%d -  %d %d\n",i,ckr_1,ckr_2);
            if(ckr_1>ckr_2) //if-checker
            {
                for(int t=0;t<30;t++) //swap
                {
                    char sort_temp=' ';
                    sort_temp=str[s+1][t];
                    str[s+1][t]=str[s][t];
                    str[s][t]=sort_temp;
                }
            }
        }
    }

    printf("Sorting End\n");
    
    int scores[10000]={0};
    long tot=0;
    int idx_1=0, idx_2=0;
    for(idx_1=0;idx_1<=ctr_1;idx_1++)
    {
        for(idx_2=0;idx_2<30;idx_2++)
        {
            if(str[idx_1][idx_2]!=0) scores[idx_1]+=str[idx_1][idx_2]-'A'+1;
        }
        scores[idx_1]=scores[idx_1]*(idx_1+1);
        tot+=scores[idx_1];
    }

    
    for(int j=1;j<12;j++)
    {
        printf("%s\n",str[j]);
    }
    printf("%s\n",str[937]);
    printf("%s\n",str[938]);
    printf("%s\n",str[939]);
    printf("%ld\n",tot);                      
}
