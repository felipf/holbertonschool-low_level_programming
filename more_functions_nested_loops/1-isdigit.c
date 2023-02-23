#include "main.h"
/**
* _isdigit - check for a digit
* @c: the letter
* Return 1 if c is a digit.
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
