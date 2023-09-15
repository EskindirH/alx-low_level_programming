#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character to check
 *
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	return ((c <= 90 && c >= 65) ? 1 : 0);
}
