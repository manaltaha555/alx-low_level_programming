#include"main.h"
/**
 *factorial -  return the factorial of a given number
 *@n: is the number
 *Return: 1 or -1 or the factorial of n;
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
