#include "main.h"
/**
 * _isalpha - is a letter lower or uppercase
 * @c: is a letter
 * Return: 1 if It's is a letter lower or uppercase.
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
