#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings with exceptions
 * @src: source
 * @dest: destination
 * @n: max. bytes that can be concatenated
 * Return: to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int desti;
	int i;

	while (dest[desti] != '\0')
	{
		desti++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[desti + i] = src[i];
	}
	dest[desti + i] = '\0';
	return (dest);
}
