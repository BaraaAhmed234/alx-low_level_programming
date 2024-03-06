#include <stdio.h>
/**
 * main - this the main function
 * 
 * Return : always 0(success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/* single digit numbers of base 10 starting from 0 */

	int number = 0;

	for (int i = 0; i < 10; i++)
	{
		putchar(number + '0');
	number++;
	}
	putchar('\n');

	return (0);
}

