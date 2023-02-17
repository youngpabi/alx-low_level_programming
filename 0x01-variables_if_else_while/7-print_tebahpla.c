#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lower case alphabets in reverse
 *
 * Return: 0 (succesful)
 */
int main(void)
{
	char g;

	/*
	 * loops through the alphabets from behind
	 * to print alphabets in reverse
	 */
	for (g = 'z' ; g >= 'a' ; g--)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
