#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int count = 0;
	if (*(s + count) != '\0')
	{
		_putchar(*(s + count));
		_puts_recursion(*(s + (count + 1)));
	}
	else
		_putchar('\n');
}
