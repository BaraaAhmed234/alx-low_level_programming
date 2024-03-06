#include <stdio.h>
/**
 * main  - this is the main function
 *
 * Return : always 0(success)
 */
/* betty style doc for function main goes here */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	letter++;
	}

	putchar('\n');

	return 0;
}
