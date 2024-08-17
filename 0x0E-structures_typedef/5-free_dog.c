#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that free
 * @d: the struct of the dog
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
