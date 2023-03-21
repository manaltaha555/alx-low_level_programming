#include <ctype.h>
/**
 * _islower - check if the c is lowercase or uppercase
 * 0c - is a int parameter
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
