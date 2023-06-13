#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - duplicate to new memory space location
 *@str: pointer to a character
 *Return: pointer to new string
 */

char *_strdup(char *str)
{
char *ptr;
int i, r = 0;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
ptr = malloc(sizeof(char) * (i + 1));
if (ptr == NULL)
return (NULL);
for (r = 0; str[r]; r++)
ptr[r] = str[r];
return (ptr);
}
