#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to print struct dog
 * @d: new name or pointer to struct dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/**
	 * checking to see if any element(except age) of d is empty or NULL
	 * hence printing (nil)
	 */
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	/**
	 * printing the respective elements in the struct
	 */
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
