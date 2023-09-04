#include"main.h"
/**
 *_strlen - function that returns the lenght of the string
 *@s: the string
 *Return: lenght of the string
 *
 *
 *
 *
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 *append_text_to_file - function that add text to a file
 *@filename: name of the file
 *@text_content:the text to be added
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);

}
