#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: string
 * @f: function to point
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f))
		(*f)(name);
}
