#include"main.h"
/**
 *create_file - create a file
 *@filename: name of the file
 *@text_content: the text to be writetn in the file
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, sizeof(char) * len);
		if (f == -1 || w == -1)
			return (-1);
		return (1);
	close(f);
	return (1);
}
