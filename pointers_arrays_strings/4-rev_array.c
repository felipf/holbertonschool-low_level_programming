#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the conten of an array of integers.
 * @a: array
 * @n: number of the elements of the array
 * Return: Reversed array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (n = n - 1; i < n; i++, n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
