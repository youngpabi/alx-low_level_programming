#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in lower case,eclude e & q
 *
 * Return: O (succesful)
 */
int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		if (m != 'e' && m != 'q')
			putchar(m);
	}
	putchar('\n');
	return (0);
}
