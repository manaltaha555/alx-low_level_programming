#include"dog.h"
/**
 *
 *init_dog - initialize a variable of type dog
 *@struct dog *d: create a variable d of type struct dog
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner  of the dog
 *Return: No Return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
