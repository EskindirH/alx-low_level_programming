#include <stdio.h>
/**
 * main - Prints the sum of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int num1, num2, fb;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 48; i++)
	{
		fb = num1 + num2;
		printf(", %ld", fb);
		num1 = num2;
		num2 = fb;
	}
	printf("\n");
	return (0);
}
