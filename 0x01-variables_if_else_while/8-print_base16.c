#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*
	 * prints the hexadecimal base16,using putchar only
	 * loops through 9-0,prints them simulating char with arithemtics
	 * loops through a-f, prints them
	 */
	int x;
	char y;

	for (t = 0 ; t < 10 ; t++)
		putchar((t % 10) + '0');

	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
