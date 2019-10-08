/*Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>

void Prime_factor(long long int n)
{
	long long int j = 0;
	for (long long int i = 1; i <= n; i++)
	{
		if (n < i) break;
		if (n % i == 0)
		{
			if (i > j) j = i;
			n = n / i;
		}
	}
	printf("%lld", j);
}

int main()
{
	Prime_factor(55);
}