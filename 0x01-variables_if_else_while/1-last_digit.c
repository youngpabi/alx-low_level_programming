#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main -prints the remainder or last digit  of random number,showing >5,<6,=0
 *
 * Return: 0, succesful
 */
int main(void)
{
	int n;
        int c
	/*code generates random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        c = n % 10;
	if (c > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else (c < 6  && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
