#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check
 *
 * Return: 1 if @c is digit, else 0
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
