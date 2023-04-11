#include "main.h"

/**
 * print_binary - Prints a binary notation of a number.
 * @a: number to be printed in binary.
 */

void print_binary(unsigned long int a)
{
	if (a > 1)
		print_binary(a >> 1);

	_putchar((a & 1) + '0');
}
