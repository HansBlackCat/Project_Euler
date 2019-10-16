#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ROW 100
#define COLUMN 14
//#define _CRT_SECURE_NO_WARNINGS

int main()
{
    char buffer[6000]={0};
    unsigned long long int nptr=0;
    unsigned long long int digitArr[200]={0};

    FILE* fp=fopen("013_Source.txt","r");
    fread(buffer,sizeof(buffer),1,fp); //read anyway, even fail return maxsize-1
    for(int i=0;i<COLUMN; i++)
    {
        for(int j=0;j<ROW;j++)
        {
            digitArr[i]+=(buffer[51*j+i]-'0');
        }
    }
    for(int i=0;i<COLUMN;i++)
    {
        unsigned long long int pow=1;
        for(int j=0;j<=i;j++)
        {
            pow*=10;
        }
        pow/=10;
        nptr+=pow*digitArr[COLUMN-1-i];
    }
    printf("%llu\n",nptr);
    fclose(fp);
    return 0;
}
