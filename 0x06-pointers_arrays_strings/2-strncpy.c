#include"main.h"
/**
 *_strncpy - copies a string
 *@dest: first string
 *@src: second string
 *@n: number of bytes
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size = 0, i;

	while (src[size])
		size++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
