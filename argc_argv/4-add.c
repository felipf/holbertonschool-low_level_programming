#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the sum of positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 for Success.
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
