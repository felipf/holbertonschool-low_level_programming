#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - converts a string to an integer.
 * @s: the string
 * Return: The integer representation of the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s != '\0')
	{
		if (*s == '-')
		{
		sign *= -1;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return (sign > 0 ? INT_MAX : INT_MIN);
		}
			result = result * 10 + digit;
		}
			else if (result > 0)
		{

			break;
		}
		s++;
	}
	return (sign * result);
}
