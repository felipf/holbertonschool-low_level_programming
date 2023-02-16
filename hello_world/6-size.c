#include<stdio.h>
/**
 * *main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longInt;
	long long int longLongInt;
	char charType;
	/* sizeof evaluates the size of a variable */
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt));
	return (0);
}
