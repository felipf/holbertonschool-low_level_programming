#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
