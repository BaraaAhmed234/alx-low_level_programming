#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** more headers goes there */
 /**
  * main - Entry point
  *
  * Return : Always 0 (Success)
  */ 
 
/* betty style doc for function main goes there */
int main(void)
{

	srand(time(0));
	int  n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 5)
	{
	printf("Last Digit of: %d is %d and is greater than 5\n", n);
	}
	else if (n  == 0)
	{
	printf("Last Digit of: %d is %d and is 0\n", n);
	}
	else 
	{
	printf("Less than 6 and not 0\n");
	}
	return (0);
}
