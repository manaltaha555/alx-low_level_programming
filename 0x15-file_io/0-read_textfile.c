#include"main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 *read_textfile - read text file
 *@filename name of the file
 *@letters: number of characters in the file
 *Return: nuber of characters in the file or 0 if it fails
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buff;
	unsigned long int w;
       ssize_t t;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(f, buff,letters);
	w = write(STDOUT_FILENO, buff, t);
	free(buff);
	close(f);
	return (w);
}
