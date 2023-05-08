#include"main.h"
/**
 *_close -  close the file
 *@fd: the foile to be closed
 *Return: void
 *
 */
void _close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *main - copy content of the file to another file
 *@arg: number of the arrguments
 *@argv: the arrguments
 *Return: 0
 *
 */
int main(int arg, char *argv[])
{
	int f1, r;
	int f2, w;
	char *buff;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	f1 = open(argv[1], O_RDWR);
	r = read(f1, buff, 1024);
	if (f1 == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
	f2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	w = write(f2, buff, r);
	if (f1 == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	_close(f1);
	_close(f2);
	return (0);
}
