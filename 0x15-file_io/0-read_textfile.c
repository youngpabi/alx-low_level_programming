#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile -it reads a text file and prints it to the POSIX standard output
 * @filename:the name of the file to read
 * @letters:the number of letters it should read and print
 *
 * Return: 0 if it fails, the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int wq;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	wq = open(filename, O_RDONLY);
	if (wq == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(wq);
		return (0);
	}
	r = read(wq, buffer, letters);
	close(wq);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (r != w)
		return (0);
	return (w);
}
