#include<ctype.h>
#include"main.h"
/**
 *_isdigit - check if the characer is digit or not
 *@c: character to be checked
 *Return: 0 or 1
 *
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
