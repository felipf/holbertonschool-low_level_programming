#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocate space which contains copy of str.
 * @str: string we'll copy.
 * Return: new space in memory.
 */
char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
	;

	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
