#include"main.h"
#include<string.h>
/**
 *_puts - prints a string, followed by a new line
 *@str: a pointer to a string
 *Return: void
 *
 */
void _puts(char *str)
{
	int i, a = strlen(str);

	for (i = 0; i < a; i++)
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}
