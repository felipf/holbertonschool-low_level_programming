#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: value assigned by user
 * @b: value assigned by user
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
