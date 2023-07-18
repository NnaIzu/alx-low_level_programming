#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to struct dog
 * @d: pointer to struct dog to be freed
 * Return: (0)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
		free(d);
	}
}
