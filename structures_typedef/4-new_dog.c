#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - new dog.
 * @name: name of the dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: the dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i;
	char *new_name;
	char *new_owner;


	newdog = malloc(sizeof(dog_t));
	if (!newdog || !name || !owner)
		return (0);


	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!new_name)
	{
		free(newdog);
		return (0);
	}
	for (i = 0; name[i]; i++)
		new_name[i] = name[i];
	new_name[i] = 0;


	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!new_owner)
	{
		free(new_name);
		free(newdog);
		return (0);
	}
	for (i = 0; owner[i]; i++)
		new_owner[i] = owner[i];
	new_owner[i] = 0;


	(*newdog).name = new_name;
	(*newdog).age = age;
	(*newdog).owner = new_owner;
	return (newdog);
}
