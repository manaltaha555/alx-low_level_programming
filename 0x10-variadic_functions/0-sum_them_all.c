#include"variadic_functions.h"
#include<stdarg.h>
#include<stdlib.h>
/**
 *sum_them_all - function that sum all the arguments
 *@n: first argument
 *Return: sum of the arguments
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	unsigned int i, sum = 0;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(n, int);
	va_end(n);
	return (sum);
}
