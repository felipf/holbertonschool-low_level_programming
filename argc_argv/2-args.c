#include <stdio.h>
/**
 * main - prints all arguments recieved
 * @argc: not used
 * @argv: arguments.
 * Return: 0 for success.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
		printf("%s\n", argv[i]);
	return (0);
}
