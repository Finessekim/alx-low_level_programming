#include <stdio.h>

/**
 * main - lists all numbers below 1024
 * that are sums of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
		int i, sum = 0;


		for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
		}


		printf("%d\n", sum);


		return (0);
}
