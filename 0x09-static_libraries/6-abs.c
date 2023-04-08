#include"main.h"
/**
 *_abs - return the absolute value of an integer
 * @r: the integer number
 *
 * Return: always int
 */
int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	else
		return (r);
}
