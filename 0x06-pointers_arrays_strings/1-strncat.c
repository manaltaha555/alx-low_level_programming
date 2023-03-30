#include"main.h"
/**
 **_strncat - concatenates the two strings
 *@dset: the first string 
 *@src: the second string
 */
char *_strncat(char *dest, char *src, int n)
{
	int size = 0, i;

	while(dest[size])
		size++; /*count the size of dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[size++] = src[i];
	}
	return (dest);
}
