#include"main.h"
/**
 *_memcpy - copy a string into another string
 *@dest: string to be modified after copy
 *@src: the second  string to be copied
 *@n: number of bytes
 *Return: string
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
