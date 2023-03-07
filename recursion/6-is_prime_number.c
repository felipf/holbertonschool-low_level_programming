#include "main.h"
/**
 * is_prime_number - if n is a prime number
 * @n: number
 * Return: 1 if its a prime number or 0 if it is not.
 */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	if (n < 4 && n > 1)
		return (1);
	return (aux(n, n - 1));
}
/**
 * aux - auxiliary helps main find if prime number.
 * @num: number we want to find out if it is prime.
 * @x: num that helps get to the actual prime.
 * Return: 0 or 1.
 */
int aux(int num, int x)
{
	if (x == 1)
		return (1);
	if (num % x == 0)
		return (0);
	if (num % x != 0)
		return (aux(num, x - 1));
	return (0);
}
