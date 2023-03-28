#include"main.h"
#include<string.h>
/**
 *print_rev - prints the string in reverse
 *@s: a pointer to a string
 *Return: void
 *
 *
 */
void print_rev(char *s)
{
	int i, a;
	
	a = strlen(s);
	for (i = a - 1; i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
