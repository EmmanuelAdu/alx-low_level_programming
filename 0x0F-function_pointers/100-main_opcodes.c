#include <stdio.h>
#include <stdlib.h>

/**
 * main - main prints the opcodes of its own functions
 * @argc: the number of arguments passed to main
 * @argv: each string passed to main
 * Return: 1 or 2 for error
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	int i = 0; /* for iterating through argument of main */
	unsigned char *ptr = (unsigned char *)main; /* declaring a pointer to main */

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	/**
	 * printing error if no. of bytes is less than 0
	 */
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < number_of_bytes; i++)
	{
		if (i == number_of_bytes -1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
