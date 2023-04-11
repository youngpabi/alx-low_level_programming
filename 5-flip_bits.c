#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @p: The number.
 * @q: The number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	unsigned long int btn, checks;
	unsigned int numb, i;

	checks = 1;
	btn = p ^ q;
	numb = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (checks == (btn & checks))
			numb++;
		checks <<= 1;
	}
	return (numb);
}
