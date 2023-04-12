#include"main.h"
#include<stdio.h>
/**
 *main - prints the name of the program
 *@argc: number of commands line in the program
 *@argv: the array of othe commands that passed to the program
 *Return: always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
