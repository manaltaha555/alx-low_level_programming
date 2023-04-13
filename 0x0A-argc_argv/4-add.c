#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
/**
 *main - add positive numbers
 *@argc: number of the arguments passed to the program
 *@argv: the array of the arguments that add to the program
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
		printf("%d\n", sum);
		return (0);
}
