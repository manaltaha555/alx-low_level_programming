#include"main.h"
/**
 * print_last_digit - print the lst digit of a number
 * @l: paramter represent the number
 * Return: always int
 */
int print_last_digit(int l)
{
	int r;
	if (l < 0)
		l*=-1;
	r = l % 10;
	_putchar(r +'0');
	return (r);
}