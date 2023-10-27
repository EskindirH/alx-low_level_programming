#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: integer pointer
 * @index: index of a bit
 * Return: 1 if it worked, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ui;

	if (index > 63)
		return (-1);
	ui = 1 << index;

	if (*n & ui)
		*n ^= ui;
	return (1);
}
