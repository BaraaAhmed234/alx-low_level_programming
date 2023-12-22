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
	printf("Size of char: %zu 1 byte(s)\n", sizeof(a));
	printf("Size of int: %zu 4  byte(s)\n", sizeof(b));
	printf("Size of long int: %zu 4  byte(s)\n", sizeof(c));
	printf("Size of long long int: %zu 8 byte(s)\n", sizeof(d));
	printf("Size of float: %zu 4  byte(s)\n", sizeof(f));
}
