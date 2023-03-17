#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu\n", (unsigned int)sizeof(a));
	printf("Size of an int : %lu\n", (unsigned int)sizeof(b));
	printf("Size of a long int: %lu\n", (unsigned int)sizeof(c));
	printf("Size of a long long int: %lu\n", (unsigned int)sizeof(d));
	printf("Size of a float: %lu\n", (unsigned int)sizeof(e));
	return (0);
}
