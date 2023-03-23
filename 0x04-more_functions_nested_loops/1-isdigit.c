#include"main.h"
/**
 *_isdigit - check if the characer is digit or not
 *@c: character to be checked
 *Return: 0 or 1
 *
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
