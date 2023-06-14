#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *argstostr - name of function to concatenates all arguments
 *@ac: size or number of arguments
 *@av: double pointer array
 *Return: pointer to argument
 */

char *argstostr(int ac, char **av)
{
int i, n, r = 0, l = 0;
char *str; /* serves as a pointer to the current argument */

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
l += ac;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
str[r] = av[i][n];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
