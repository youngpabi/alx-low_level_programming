#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: -1 if failure else 1
 */

int create_file(const char *filename, char *text_content)
{
	int o, w;
	int le = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (le = 0; text_content[le];)
			le++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, le);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
