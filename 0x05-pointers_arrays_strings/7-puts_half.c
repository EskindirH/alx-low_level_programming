#include "main.h"

/**
 * puts_half -  prints half of a string.
 * @str: character pointer.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, counter = 0;

	while (*(str + counter) != '\0')
		counter++;

	if (counter % 2 == 0)
		i = (counter - 1) / 2;
	else
		i = counter / 2;

	for (i++; i < counter; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
