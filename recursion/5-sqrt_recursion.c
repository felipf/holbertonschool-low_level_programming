#include "main.h"
/**
 * _aux - finds the square
 * @n: number
 * @x: natural square
 * Return: square root of a number and -1 if not found
 */
int _aux(int n, int x)
{
	int sqrt;

	sqrt = x * x;
	if (sqrt == n)
		return (x);
	else if (sqrt < n)
		return (_aux(n, (x + 1)));
	else
		return (-1);
}

/**
 * _sqrt_recursion - calculates the square root of a number and returns it
 * @n: number we want to find the natural square of
 * Return: root of a number
 */
int _sqrt_recursion(int n)
{
	return (_aux(n, 1));
}
