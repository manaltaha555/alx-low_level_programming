#include <ctype.h>
/**
*_isalpha - check if the c is lowercase or uppercase
*@c: parameter to printed
*Return: 0 or 1
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
