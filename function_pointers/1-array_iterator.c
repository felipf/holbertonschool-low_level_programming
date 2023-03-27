#include "function_pointers.h"
/**
 * array_iterator - exec func given on each array elem.
 * @array: the array
 * @size: size of array
 * @action: function
 */
void array_interator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if ((*array) && array)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
