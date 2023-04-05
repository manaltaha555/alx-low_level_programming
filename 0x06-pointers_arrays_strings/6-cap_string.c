#include"main.h"
/**
 *cap_string - function tht capitalize the string
 *@s: the string
 *Return: the string
 *
 */
/**
 *isseparator - check if the character is separator or not
 *@c: character
 *Return: 0 or 1
 *
 */
/**
 *islower - check if the character is lower or not
 *@c: character
 *Return: true or false
 */
int isseparator(char c)
{
	int i;
	char sep[] = {"\t\n,.;!?\"(){}"};
	for (i = 0; i < 12; i++)
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}
int _islower(char c)
{
	return (c >= 'a' && c <= 'z');
}
char *cap_string(char *s)
{
	int found = 1;
	char *ptr = s;

	while (*s)
	{
		if (isseparator(*s))
			found = 1;
		else if (_islower(*s) && found)
		{
			*s -= 32;
			found = 0;
		}
		else
			found = 0;
		s++;
	}
	return (ptr);
}



