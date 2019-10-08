/*Smallest multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <stdio.h>
#include <math.h>

void MinMul(int n)
{
	double sum = 1;
	int primenum_num;
	for (int i = 2; i <= n; i++)
	{
		primenum_num = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) primenum_num++;
		}
		if (primenum_num == 0) // prime number calculate
		{
			for (int k = 1; k <= n; k++)
			{
				if (pow(i, k) > n) //(Prime#(i)^(k-1)) == max square # just lower than n
				{
					//printf("%f\t", pow(i, k - 1)); //if n=10, print 2^3, 3^2, 5, 7
					sum *=pow(i, double(k) - 1);
					break;
				}
			}
		}
	}
	printf("%f", sum);
}

int main()
{
	MinMul(20);
}