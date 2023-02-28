#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest: the buffer
 * @src: the string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	sprintf(dest, "%s", src);
	return (dest);
}
