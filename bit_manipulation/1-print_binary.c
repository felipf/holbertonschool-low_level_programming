#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;

	while ((n >> len) > 0)
		len++;

	len--;

	while (len >= 0)
	{
		if ((n >> len) & mask)
			_putchar('1');
		else
			_putchar('0');

		len--;
	}
}

