#include <stdlib.h>
#include "dog.h"
/**
* free_dog - it free the memory
* @d: for the struct the dog to free
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
~          
