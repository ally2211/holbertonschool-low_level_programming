#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to initialize dog
 * @d:  pointer
 * @name:  char
 * @age:  float
 * @owner:  char *
 *
 * Description:  function to initialize variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
