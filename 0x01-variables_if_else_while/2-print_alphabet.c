#include <stdio.h>
/**
 * Main - this is the main function 
 *
 * Return : always 0(success)
 */
/* betty style doc for function main goes here */

int main(void)
{
	/* Declare a variable and initialize it with the first member of the range [a - z] */

	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}
	putchar('\n');
	return (0);
}
