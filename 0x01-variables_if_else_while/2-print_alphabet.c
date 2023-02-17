#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the lower case of the alphabet
 *
 * Return: 0, succesful
 */
int main(void)
{
	char g;

	for (g = 'a' ; g <= 'z' ; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
