#include"main.h"
/**
 *char *_strcat - concatenates two strings
 *@dest: first string
 *@src: second string
 *Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int size1, size2;
	int i;

	for (size1 = 0; dest[size1] != '\0'; size1++)
		;
	for (size2 = 0; src[size2] != '\0'; size2++)
		;
	for (i = 0; i <= size2 - 1; i++)
	{
		dest[size1++] = src[i];
	}
	return (dest);
}
