#include "main.h"
/**
 * factorial - return the factorial
 * @n: number
 * @factorial: the function of the task
 * Result: result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
