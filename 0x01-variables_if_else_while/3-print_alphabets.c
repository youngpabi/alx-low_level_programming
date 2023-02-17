#include <stdio.h>
#include <ctype.h>
/**
 * main - print lowercase followed by uppercase alphabets
 *
 * Return: 0 (succesful)
 */
int main(void)
{
	char g;
	char m;

	for (g = 'a' ; g <= 'z' ; g++)
	{
		putchar(g);
	}
	for (m = 'A' ; m <= 'Z' ; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
