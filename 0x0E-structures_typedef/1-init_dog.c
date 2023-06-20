#include "dog.h"
/**
 * init_dog -to a variable struct dog.
 * @d: the struct dog.
 * @name: the name.
 * @age: the age.
 * @owner: the owner 
 * Return: nill.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}
