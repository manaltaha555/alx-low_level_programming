#include"main.h"
#include<stdlib.h>
/**
 *malloc_checked -  allocates memory using malloc
 *@b: size of the block of code
 *Return: pointer to th eblock of memory
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
