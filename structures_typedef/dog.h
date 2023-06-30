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
void print_dog(struct dog *d);
/**
 * struct dog_t - typedef my_dog description
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: all about mydog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
