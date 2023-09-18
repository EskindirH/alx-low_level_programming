#include "main.h"

/**
 * puts2 - prints half of a string
 * @str: character pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		if (counter % 2 == 0)
			_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
