#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - results going from 98 or up to 98!.
 * @n: num1.
 * Return: the result.
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
