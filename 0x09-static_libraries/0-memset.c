#include"main.h"
/**
 *_memset -  function that fills memory with a constant byte.
 *@s: the string to be filled
 *@b: character to be filled with
 *@n: number of characters to be filled with
 *Return: string
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
