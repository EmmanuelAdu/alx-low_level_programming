#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - this function returns 1 if number is prime
 * otherwise returns 0
 */

int is_prime_number(int n)

{
int a;

if (n <= 1)
return 0;

while ((a = 2) || a * a <= n)
a++;
if (n % a == 0)
return 0;
else return 1;
}
