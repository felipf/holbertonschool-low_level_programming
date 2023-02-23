#include "main.h"
#include <stdio.h>
/**
 * main - helps filter 99.5% of candidates.
 *
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			_putchar(32);
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			_putchar(32);
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i < 100)
			{
				_putchar(32);
			}
		}
		else
		{
			printf("%d", i);
			_putchar(32);
		}
	}
	_putchar(10);
	return (0);
}
