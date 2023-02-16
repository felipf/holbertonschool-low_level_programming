#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int D;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	D = (n % 10);

	printf("Last digit of %d is %d", n, D);
	if (D > 5)
		printf("and is greater than 5\n");
	else if (D == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
