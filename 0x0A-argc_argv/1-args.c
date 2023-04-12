#include"main.h"
#include<stdio.h>
/**
 *main - prints the number of arguments passed into it
 *@argc: number of arguments passed into it
 *@argv: array of arrguments passed to the program
 *Return: always 0
 *
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}

