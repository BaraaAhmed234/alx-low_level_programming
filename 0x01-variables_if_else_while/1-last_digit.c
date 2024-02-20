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
	 
        int lastdigit;

	lastdigit = n % 10;

	if (lastdigit > 5){
	printf("Last Digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0){
	printf("Last Digit of %d is %d and is 0\n", n, lastdigit);
	}
	else (lastdigit < 6 && lastdigit != 0){
	printf("Last Digit of %d is %d and is less than 6 and 0\n", n, lastdigit);
	}
	return (0);
}
