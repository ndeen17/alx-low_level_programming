#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it frees the  memory allocated for a struct dog
 * @d: to free the dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
    
