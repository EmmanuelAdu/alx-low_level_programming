#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * _calloc - this function allocates memory for an array
 *  and sets all members to 0
 *  @nmemb: this is the number of members of the array
 *  @size: this is the size of the array
 *  Return: pointer to allocated memory else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr; /* pointer to allocated memory */

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL) /* checking if malloc was successful */
		return (NULL);

	memset(ptr, 0, (nmemb * size));
	return (ptr);
}
