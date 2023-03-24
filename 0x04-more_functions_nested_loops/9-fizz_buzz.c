#include<stdio.h>
#include"main.h"
/**
 *fizz_buzz - test for fiter out the programming job candidates
 *Return: void
 *
 *
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}
/*
 *main - execute the code
 *Return: always 0
 *
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
