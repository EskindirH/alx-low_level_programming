#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number
 *
 * Return: if n is greater than 0 factorial of a number else -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0);
		return (1);
	else
		return (n * factorial(n - 1));
}
