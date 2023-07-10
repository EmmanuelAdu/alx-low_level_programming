#include <unistd.h>
#include "function_pointers.h"
/**
 *_putchar - this function prints a char to the stdout
 *@c: the char to print
 *Return: 1 on success else -1 on error and set
 *errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
