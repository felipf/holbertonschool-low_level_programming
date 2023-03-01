#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @s: the string.
 * Return: reverse string.
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	i--;

	while (*(s + i))
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
