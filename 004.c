/*Largest palindrome product
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ¡¿ 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>
#include <math.h>

int reverse_int(int n)
{
	int digit=0;
	for (int i = 1; i < 1000000; i *= 10)
	{
		if (n / i == 0) break;
		++digit;
	}
	
	int rev_num = 0;
	int max_len = pow(10, digit);
	for (int i = 1; i < max_len; i *= 10)
	{
		/*
		54321/1 54321%10 1 *10000
		54321/10 5432%10 2 *1000
		54321/100 543%10 3 *100
		54321/1000 54%10 4 *10
		54321/10000 5%10 5 *1
		*/
		rev_num += ((n / i) % 10) * (max_len/10/i);
	}
	return rev_num;
}

void palid()
{
	int cr, ar=0; //for-for, least-selecter
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			cr = i * j;
			if (cr == reverse_int(cr)&&ar<=cr) ar = cr;
		}
	}
	printf("%d", ar);
}

int main()
{
	palid();
}