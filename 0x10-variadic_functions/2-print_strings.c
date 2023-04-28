#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 *print_strings - print strings separate by separators
 *@separator: separatoe between the strings
 *@n: number of arguments passed to te function
 *Return: void
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *ptr;
	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	if (!separator)
		separator = "";
	va_start(list, n);
	if (n && separator)
	{
		while (i--)
		{
			ptr = va_arg(list, char *);
			if (ptr)
			{
				printf("%s", ptr);
				if (i == 0)
					break;
				printf("%s", separator);
			}
			else
				printf("(nil)");
		}
		printf("\n");
	}
	va_end(list);
}
