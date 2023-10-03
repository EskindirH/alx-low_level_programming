#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: product of argument or 0 if no argument passed
 */
int main(int argc, char *argv[])
{
	if (argv != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
