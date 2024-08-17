#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * slen - function that retrn size of string
 * @s: the string s
 * Return: length
 */
int slen (char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	s = s - size;
	return (size);
}
/**
 * new_dog -  function that creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the age
 * Return: return dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int ln = slen(name);
	int lo = slen(owner);
	char *n, *o;
	int i;

	d = malloc(sizeof(dog_t *));
	if (d == NULL)
		return (NULL);
	n = malloc(sizeof(char) * (ln + 1));
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}
	o = malloc(sizeof(char) * (lo+1));
	if (o == NULL)
	{
		free(d);
		free(n);
		return(NULL);
	}
	for (i = 0; i < ln; i++)
		n[i] = name[i];
	n[i]= '\0';
	for (i = 0; i < lo; i++)
		o[i] = owner[i];
	o[i]= '\0';
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);

}
