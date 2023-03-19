#include <stdio.h>

/**
 * main -this code prints alphabets except e and q
 *
 * Return: always when successful
 */

int main(void)

{
char i;

for (i = 'a'; i <= 'z'; i++)
if (i != 'e' && i != 'q')
putchar(i);
putchar('\n');
return (0);
}
