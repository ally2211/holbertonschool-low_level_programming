#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print dog info
 * @d:  pointer
 *
 * Description:  function to print dog data struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("nil");
	else
		printf("%s", d->name);

	if (d->age == 0)
		printf("nil");
	else
		printf("%.1f", d->age);

	if (d->owner == NULL)
		printf("nil");
	else
		printf("%s", d->owner);
}
