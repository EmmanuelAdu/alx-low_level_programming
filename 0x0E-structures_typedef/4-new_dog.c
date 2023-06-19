#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - function to return the length of a string
 * @s: string to find the length
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	if (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * new_dog - this function creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of dog
 * Return: pointer to new dog created else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr; /* pointer to new_dog created */

	ptr = malloc(sizeof(dog_t)); /* this is the total memory needed */

	if (ptr == NULL)
		return (NULL);
	/**
	 * ALLOCATING MEMORY FROM THE ptr MEMORY FOR NAME AGE AND OWNER INFO
	 */
	ptr->name = malloc(sizeof(char) * _strlen(name) + 1);

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);

	ptr->age = age;

	return (ptr);
}
