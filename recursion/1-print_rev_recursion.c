#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 * Return: the reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')

		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
