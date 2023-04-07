#include"main.h"
/**
 *_sqrt_recursion - find the square root of a variable
 *@n: the variable
 *@val: the square root
 *Return: the square root
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 *square - find a square root
 *@n: the number to get its root
 *@val: the root to calculated
 *Return: the square root
 *
 */
int square(int n, int val)
{
if (val * val == n)
{
return (val);
}
else if (val *  val < n)
{
return (square(n, val + 1));
}
else
{
return (-1);
}
}

