#include <stdio.h>
/**
 * main - this is the main function
 * Return : always 0 (success)
 */
/* betty style doc for main function goes here */
int main(void)
{
	int y;

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
