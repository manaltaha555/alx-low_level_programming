#include"main.h"
/**
 *append_text_to_file -  append text to a file
 *@filename: anme of the file
 *@text_content: text to be appended
 *Return: 1 or -1
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, len;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	w = write(f, text_content, len);
	if (w == -1)
		return (-1);
	close(f);
	return (1);
}
