#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @c: Number to be computed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = c % 10;
	if (lastDigit < 0)
	{
		_putchar(-lastDigit + 48);
		return (-lastDigit);
	}
	else
	{
		_putchar(lastDigit + 48);
		return (lastDigit);
	}
}
