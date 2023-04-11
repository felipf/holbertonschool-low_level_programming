#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number
 * @index: Index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		if (index <= 64)
		{
			*n &= ~(1 << index);
			return (1);
		}
	}
	return (-1);
}
