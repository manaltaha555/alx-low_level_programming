#include"main.h"
/**
 *print_binary - prints the integer number in binary form
 *@n: the integer number
 *Return: no return
 *
 *
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, pritnted = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
