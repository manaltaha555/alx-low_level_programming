#include"main.h"
#include<stdio.h>
/**
 *main - prints all arguments it receives
 *@argc: number of the arguments
 *@argv: array of the arguments
 *Return: always 0
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
