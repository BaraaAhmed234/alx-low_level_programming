#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0 (success)
 *
 */
/* betty style doc for function main goes here */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i); /* lower case alphabet */
	}

	for (i = 65; i < 91; i++)
	{
		putchar(i); /* uppercase alphabet */
	}

	putchar('\n'); /* new line */

	return (0);
}
