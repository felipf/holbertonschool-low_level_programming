#include "main.h"
/**
 * print_line - print a straight line with _
 *
 * @n: num defined by user
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}
