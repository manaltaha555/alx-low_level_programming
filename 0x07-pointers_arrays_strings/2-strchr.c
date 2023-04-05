#include <stddef.h>
#include"main.h"
/**
 *_strchr -  return the first occurance of acharacter in string
 *@c: character to e checked
 *Return: a pointer to the first ocuurance of the cahracter
 *@s: is the string
 */
char *_strchr(char *s, char c)
{
	int size = 0;
	int i;

	while (s[size])
		size++;
	for (i = 0; i < size - 1; i++)
	{
		ptr = &s[i];
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
