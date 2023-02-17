#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase,
 * each on separate lines.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	while (lower_case <= 'z' && upper_case <= 'Z')
	{
		putchar(lower_case);
		putchar('\n');
		lower_case++;

		putchar(upper_case);
		putchar('\n');
		upper_case++;
	}

	return (0);
}
