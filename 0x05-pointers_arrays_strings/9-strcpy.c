#include"main.h"
/**
 *_strcpy - copies the string
 *@dest: string to be filled with another string
 *@src: string to be copied
 *Return: array of characters
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];

	} while (src[i] != '\0');
	return (dest);
}
