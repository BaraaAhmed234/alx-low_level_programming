#include <stdio.h>
/**
 * main - this is the main function 
 *
 * Return : always 0(success)
 */
/* betty style doc for function main goes here */
int main(void)
{
        char alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}
	putchar('\n');
	return (0);
}
