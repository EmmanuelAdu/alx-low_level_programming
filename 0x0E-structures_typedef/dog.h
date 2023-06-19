#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a defined struct containing diff data type of info of dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
