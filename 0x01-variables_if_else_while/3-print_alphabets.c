#include <stdio.h>

/**
 * main - this code prints alphabets in lower and uppercase
 *
 * Return: always when successful
 */

int main(void)

{
char low;

for (low = 'a' ; low <= 'z' ; low++)
putchar(low);

for (low = 'A' ; low <= 'Z' ; low++)
putchar(low);
putchar('\n');

}

