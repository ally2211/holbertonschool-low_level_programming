#include "main.h"
#include <stdlib.h>
/** 
 * malloc_checked - function that allocates memory using maloc
 * @b: int of the status value
 *
 * Return: a pointer to the allocated memory.  If fails, status value is 98 
 **/
void *malloc_checked(unsigned int b)
{
	void *newpointer;
	newpointer = malloc(b);

	if (newpointer == NULL)
	{
		exit(98);
	}
	return newpointer;
}
