#include <stdio.h>
/**
 * main - here is the main function
 * return : always 0(success)
 */
/* betty style doc for the main function goes here */
int main(void)
{
	/* All single digit numbers of base 10 followed by a new line */

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
