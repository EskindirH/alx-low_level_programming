#include <stdio.h>
/**
 * main - Prints natural numbers below 1024 which are multiplies of 3 or 5
 *
 * Return: integer 0 when exited normally
 */
int main(void)
{
	int i, r;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			r += i;
	}
	printf("%d\n", r);
	return (0);
}
