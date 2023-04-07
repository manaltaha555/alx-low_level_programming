#include"main.h"
/**
 * _strlen_recursion - print the length of the string
 *@s:the string
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
		i += 1 + _strlen_recursion(s + 1);
	return (i);
}
