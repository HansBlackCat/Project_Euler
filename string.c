#include <stdio.h>
#define SIZE 1000

int strLen(char* s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}

void strRev(char* s)
{
    int Len=strLen(s);
    char cpy[Len];
    for(int j=0;j<Len;j++)
    {
        cpy[j]=s[j];
    }
    for(int i=0;i<Len;i++)
    {
        //swap(&s[i],&s[Len-1-i]);
        s[i]=cpy[Len-1-i];
    }
}

int main()
{
    char p[SIZE];
    scanf("%s",p);
    int a=strLen(p);
    printf("%d\n",a);
    strRev(p);
    printf("%s\n",p);
}

/*
 * char* p ->  p="Hello" possible 
 * char p[1000] -> scanf possible p="hello" impossible
 * scanf -> ignore whitespace
 */
