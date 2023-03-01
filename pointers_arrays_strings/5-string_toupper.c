#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - change lowercase letters to uppercase.
 * @toUpper: changes to uppercase.
 * Return: uppercased letters.
 */
char *string_toupper(char *toUpper)
{
	int i;

	for (i = 0; toUpper[i] != 0; i++)
	{
		if (toUpper[i] >= 97 && toUpper[i] <= 122)
		{
			toUpper[i] -= 32;
		}
	}
	return (toUpper);
}
