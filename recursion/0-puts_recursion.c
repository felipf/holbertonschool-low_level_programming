#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print a string
 * @s: string
 * Result: string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
