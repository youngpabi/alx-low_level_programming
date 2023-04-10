#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: 0 if failure, Else actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int nas;
	ssize_t v, z;
	char *buffer;
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: 0 if failure, Else actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int san;
	ssize_t t, w;
	char *buff;

	if (filename == NULL)
		return (0);
	san = open(filename, O_RDONLY);
	if (san == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(san);
		return (0);
	}
	r = read(san, buff, letters);
	close(san);
	if (t == -1)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, t);
	free(buff);
	if (t != w)
		return (0);
	return (w);
}
	
