#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: value
 * @y: value
 * Return: if y < 0 --> -1 (error)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
