#include <stdio.h>
/**
 * main - prints the num of args passed to it.
 * @argc: number of args.
 * @argv: not used here
 * Return: 0 for success.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
