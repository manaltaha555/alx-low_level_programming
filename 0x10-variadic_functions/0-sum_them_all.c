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
	int sum = 0, i = n;
	va_list list;

	if (!n)
		return (0);
	va_start(list, n);
	while (i--)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
