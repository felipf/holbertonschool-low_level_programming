#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @i: number
 * Return: i as last digit.
 */
int print_last_digit(int i)
{
	i = abs(i % 10);
	_putchar(i + '0');
	return (i);
}
