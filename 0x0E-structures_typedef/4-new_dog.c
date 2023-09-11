#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n_length = 0, o_length = 0, i;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[n_length++])
		;
	while (owner[o_length++])
		;
	dog->name = malloc(n_length * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n_length; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	dog->owner = malloc(o_length * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o_length; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
