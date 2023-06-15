#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int o, m;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (o = 0, add = 0; o < len; o++)
		add += argv[1][i];
	p[1] = l[(add ^ 79) & 63];
	for (o = 0, b = 1; o < len; o++)
		b *= argv[1][i];
	p[2] = l[(b ^ 85) & 63];
	for (m = argv[1][0], o = 0; i < len; o++)
		if ((char)m <= argv[1][o])
			m = argv[1][o];
	srand(m ^ 14);
	p[3] = l[rand() & 63];
	for (m = 0, o = 0; o < len; o++)
		m += argv[1][o] * argv[1][o];
	p[4] = l[(m ^ 239) & 63];
	for (m = 0, o = 0; (char)o < argv[1][0]; o++)
		m = rand();
	p[5] = l[(m ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
