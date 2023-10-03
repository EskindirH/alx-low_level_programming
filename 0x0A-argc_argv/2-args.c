#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < agrc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
