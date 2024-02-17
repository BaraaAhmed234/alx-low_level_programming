#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of char: %lu.\n", sizeof(a));
	printf("Size of int: %lu.\n", sizeof(b));
	printf("Size of long int: %lu.\n", sizeof(c));
	printf("Size of long long int: %lu.\n", sizeof(d));
	printf("Size of float: %lu.\n", sizeof(f));
	return (0);
}
