#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @a: A pointer to the bit to set
 * @index: The index to set the value of bit
 *
 * Return: 1 if error, else -1
 */

int set_bit(unsigned long int *a, unsigned int index)
{
	unsigned long int set_b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set_b = 1 << index;
	*a = *a | set_b;

	return (1);
}
