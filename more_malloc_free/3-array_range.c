#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array pf integers
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int len, i;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	array = malloc(len * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		array[i] = min;
	return (array);
}
