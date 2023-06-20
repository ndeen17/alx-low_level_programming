#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - the Typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - the structure that stores some information of a dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 * Description: structure  called "dog" that stores the  name, the  age
 * and the name of its owner.
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
