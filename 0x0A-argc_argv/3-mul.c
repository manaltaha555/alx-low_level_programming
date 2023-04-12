#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *main - multiplies the two numbers
 *@argc: number of the arguments passed to the program
 *@argv: array of the arguments that passed to the program
 *Return: always 0
 *
 *
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
}
