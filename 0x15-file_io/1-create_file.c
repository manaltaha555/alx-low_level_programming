#include"main.h"
/**
 *create_file - create a file
 *@filename: name of the file
 *@text_content: the text to be writetn in the file
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int f, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	f = open(filename, O_RDWR | O_TRUNC);
	if (f == -1)
	{
		f = creat(filename, S_IRUSR | S_IWUSR);
		f = write(f, text_content, sizeof(text_content) - 1);
		if (f == -1)
			return (-1);
		return (1);
	}
	else
	{
		f = write(f, text_content, sizeof(char) * len);
		if (f == -1)
			return (-1);
		return (1);
	}
	close(f);
	return (-1);
}
