#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase,
 * each on separate lines, using only 3 putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	while (lower_case <= 'z' && upper_case <= 'Z')
	{
		putchar(lower_case"\n");
		putchar(upper_case);
		lower_case++;
		upper_case++;
	}

	putchar('\n');

	return (0);
}
