#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if b is NULL or contains
 *         one or more chars that are not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			num = num << 1;
		else if (b[i] == '1')
			num = (num << 1) | 1;
		else
			return (0);
	}

	return (num);
}
