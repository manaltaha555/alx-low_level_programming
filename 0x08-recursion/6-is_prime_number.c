#include"main.h"
/**
 *is_prime_number - check if the number is a prime number or not
 *@n: the number
 *@i: the numbr to be divided at
 *Return: 0 or 1
 *
 *
 */
int prime(int n, int i);
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 *prime -  check if the number is primary or not
 *@n: is the number
 *@i: is the divisor
 *Return: 0 or 1
 *
 *
 *
 */
int prime(int n, int i)
{
	if (n <= i && n > 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prime(n, i + 1));
}

