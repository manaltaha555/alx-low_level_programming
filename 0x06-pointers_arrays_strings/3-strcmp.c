#include"main.h"
/**
 *_strcmp - compares the two string
 *@s1: first string
 *@s2: second string
 *Return: 0 or 1 or -1
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
		equal = ((int) *s1 - 48) - ((int) *s2 - 48);
		}
		s1++;
		s2++;
	}
	return (equal);
}
