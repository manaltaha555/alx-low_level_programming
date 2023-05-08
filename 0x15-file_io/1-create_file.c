#include"main.h"
/**
 *create_file - create a file
 *@filename: name of the file
 *@text_content: the text to be writetn in the file
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY);
	if (f == -1)
	{
		f = creat(filename, S_IRUSR | S_IWUSR);
		f = write(f, text_content, sizeof(text_content) - 1);
		if (!f)
			return (-1);
		return (1);
	}
	else
	{
		f = write(f, text_content, sizeof(text_content) - 1);
		if (!f)
			return (-1);
		return (1);
	}
	close(f);
	return (-1);
}
