#include"main.h"
/**
 *flip_bits - return number of flips that need to be done to
 *transform a string to another
 *@n: first number
 *@m: the second string
 *Return: number of flips
 *
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int orval = n ^ m;
	unsigned long int count = 0;

	while (orval)
	{
		if (orval & 1ul)
			count++;
		orval = orval >> 1;
	}
	return (count);

}
