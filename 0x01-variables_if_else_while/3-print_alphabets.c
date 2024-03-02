#include <stdio.h>
/**
 * main Entry
 * always return 0 (success)
 *
 */
int main()
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
