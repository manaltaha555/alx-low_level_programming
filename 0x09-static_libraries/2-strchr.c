#include"main.h"
/**
 *_strchr -  return the first occurance of acharacter in string
 *@c: character to e checked
 *Return: a pointer to the first ocuurance of the cahracter
 *@s: is the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
