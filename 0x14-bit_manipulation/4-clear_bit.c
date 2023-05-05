#include"main.h"
/**
 *clear_bit - set a bit in specific index to 0
 *@n: the number
 *@index: the bit to clear
 *Return: 1 or -1
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		8n ^= 1L << index;
	return (1);
}
