/*Special Pythagorean Triplet
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int checker=0;
    int k=0;
    for (int i=1; i<1000; i++)
    {
        for (int j=1; j<1000; j++)
        {
           k=1000-(i+j);
           if (k<=0) continue;
           if (i*i+j*j==k*k && i<=j) 
           {
               checker++;
               printf("%d^2 + %d^2 == %d^2\n",i,j,k);
               printf("Sum: %d\n", i*j*k);
               break;
           }
        }
    }
    if (checker==0) printf("Something wrong");
}
