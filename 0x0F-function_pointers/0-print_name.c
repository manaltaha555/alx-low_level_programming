#include"function_pointers.h"
#include<stdlib.h>
/**
 *print_name - prints the name
 *@name: pointer to the first string
 *@f: pointer to function to be called
 *Return: void
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
