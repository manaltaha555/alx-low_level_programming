#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 *print_numbers -  print numbers and arguments between them
 *@separator: separator between numbers
 *@n: numer of arguments
 *Return:  void
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i = n;

	if (!n)
		printf("\n");
	if (!separator)
		printf("\n");
	if (separator && n)
	{
		va_start(list, n);
		while (i--)
		{
			printf("%d", va_arg(list, int));
			if (i == 0)
				break;
			printf("%s", separator);
		}
		printf("\n");
	}
}
