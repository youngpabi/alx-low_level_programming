#include <stdio.h>
/**
 * main - entry 
 *
 * Return: 0 (succesful)
 */
int main(void)
{
	/*
	 * prints all combination of 2 different digits
	 */
	/* take x abd y as possible digits */
	int x, y;
	/*loop through x,1st digit,lowest of the 2, highest possible is 8*/
	for (x = 0 ; x <= 8 ; x++)
	{
		/*loop through y,2nd digit,higher than a by 1,highest possible is 9*/
		for (y = a + 1 ; y <= 9 ; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			/*continues to put coma,space,stop if last highest combination is met*/
			if (x == 8 && y == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
