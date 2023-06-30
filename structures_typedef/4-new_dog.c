#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog.
 *         NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	size_t nameLength = 0, ownerLength = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	nameLength = strlen(name) + 1;
	ownerLength = strlen(owner) + 1;

	newDog->name = malloc(nameLength);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(ownerLength);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	strncpy(newDog->name, name, nameLength);
	strncpy(newDog->owner, owner, ownerLength);
	newDog->age = age;

	return (newDog);
}
