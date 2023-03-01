#include "main.h"
/**
 * *_strncat - concatenate n characters
 *
 * @dest: destination of the concatenated stirng
 * @src: stirng to concatenate
 * @n: number of characters to concatenate
 * Return: pointer to stirng concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y = 0;

	for (x = 0; dest[x]; x++)
		;

	while (src[y] != src[n])
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
