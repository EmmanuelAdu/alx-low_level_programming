#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _malloc - this function that allocates memory to an ptr
 * @old_size: the size or number of bytes for memory allocation
 * Return: pointer to allocated memory
 */

void *_malloc(unsigned int old_size)
{
	void *ptr; /* pointer to old memory size */

	ptr = malloc(sizeof(int) * old_size);

	if (ptr == NULL)
		return (NULL);
	free(ptr);
	return (ptr);
}

/**
 * _realloc - this function reallocates memory to a new size
 * @ptr: pointer to old memory allocation
 * @old_size: the old memory allocation size
 * @new_size: the new memory allocation size
 * Return: pointer to newly allocated memory size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tempPtr; /* temp pointer to newly allocated memory */

	ptr = _malloc(old_size); /* calling old function */
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		return (NULL);

	tempPtr = malloc(sizeof(int) * new_size); /* creating memory */

	if (tempPtr == NULL)
	{
		free(tempPtr);
		return (NULL);
	}
	memcpy(tempPtr, ptr, new_size);
	free(tempPtr);
	return (tempPtr);
}
