#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string
 * @str: The string to print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
