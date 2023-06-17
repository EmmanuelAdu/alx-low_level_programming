#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

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

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	tempPtr = malloc(new_size); /* creating memory */

	if (tempPtr == NULL)
	{
		return (NULL);
	}

	/*
	 * checks if new_size is less than old_size and copies only the
	 * amount of ptr bytes that can contain into new_size bytes
	 * else copies entire old_size bytes to tempPtr
	 */

	if (new_size < old_size)
		memcpy(tempPtr, ptr, new_size);
	else
		memcpy(tempPtr, ptr, old_size);

	free(ptr);
	return (tempPtr);
}
