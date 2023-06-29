#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my_dog description
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: all about mydog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
