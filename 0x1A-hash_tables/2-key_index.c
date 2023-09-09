#include "hash_tables.h"

/**
 * key_index - function that generates a distributed index to a given hash
 * @key: key passes
 * @size: hash tables
 * Return: key indexs
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
