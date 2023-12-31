#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string pointer
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, b_2;

	if (!b)
		return (0);
	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b_2 = 1; len >= 0; len--, b_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			ui += b_2;
	}

	return (ui);
}
