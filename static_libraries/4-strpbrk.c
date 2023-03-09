#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search a sring for any set of bytes
 * @s: the string
 * @accept: to find
 * Return: s or null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;


	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
