#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer.
 * @s: the string
 * Return: The integer representation of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (num * sign);
}
