#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @i: number
 * Return: i absolute value
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	if (i < 0)
	{
		i = (i * (-1));
	}
	return (i);
}
