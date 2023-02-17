#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0 (succesful)
 */
int main(void)
{
	/*
	 * prints all single integers, with comma and space after
	 * loops through 0-9, prints them,prints comma,print space,
	 * use only putchar
	 */
	int u;

	for (u = 0 ; u < 10 ; u++)
	{
		putchar((u % 10) + '0');
		if (u == 9)
		/*continue printing comma and space except if u == 9*/
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
	}
