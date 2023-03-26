#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a dog
 * @newdog: the dog
 */
void free_dog(dog_t *newdog)
{
	if (newdog)
	{
		free(newdog->name);
		free(newdog->owner);
	}
	free(newdog);
}
