#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - length of a string
 * @str: pointer to string
 *
 * Return: length of string
 */

size_t _strlen(char *str)
{
	size_t p;

	for (p = 0; str[p]; p++)
		;
	return (p);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL
 *         -1 If the file does not exist the user lacks write permissions
 *         Else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int san;
	ssize_t le;

	if (filename == NULL)
		return (-1);
	le = open(filename, O_WRONLY | O_APPEND);
	if (san == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(san);
	if (le == -1)
		return (-1);
	return (1);
}

