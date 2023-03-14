#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings..
 * @s1: ctrl + c.
 * @s2: ctrl + v.
 * Return: final pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int p1, p2 = 0, len;

	if (s1 != NULL && s2 == NULL)
		len = strlen(s1);
	if (s1 == NULL && s2 != NULL)
		len = strlen(s2);
	if (s1 != NULL && s2 != NULL)
		len = (strlen(s1) + strlen(s2));

	len += 1;
	con = malloc(len);
	if (con == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (p1 = 0; s1[p1]; p1++)
		{
			con[p2] = s1[p1];
			p2++;
		}
	}
	if (s2 != NULL)
	{
		for (p1 = 0; s2[p1]; p1++)
		{
			con[p2] = s2[p1];
			p2++;
		}
	}
	con[p2] = '\0';
	return (con);
}
