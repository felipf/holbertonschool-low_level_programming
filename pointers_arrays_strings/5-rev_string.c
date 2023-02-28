#include "main.h"
/**
 * rev_string - return a reversed string
 * @s: the reverse string.
 */
void rev_string(char *s)
{
	char *principio = s;
	char *final = s;

	while (*final)
		final++;
	final--;

	while (principio < final)
	{
		char tmp = *principio;
		*principio = *final;
		*final = tmp;

		principio++;
		final--;
	}
}
