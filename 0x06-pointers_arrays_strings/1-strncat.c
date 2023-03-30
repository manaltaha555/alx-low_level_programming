#include"main.h"
/**
 *_strncat - to concanitate two strings
 *@dest: first strig
 *@src: second string
 *@n: number of bytes
 *Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int size = 0, i;

	while (dest[size])
		size++; /*count the size of dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[size++] = src[i];
	}
	return (dest);
}
