#include "main.h"
/**
 * main - alphabet lower case
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	
	_putchar('\n');

	return (0);
}
