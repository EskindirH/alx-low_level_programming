#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, else 0
 */
int _isalpha(int c)
{
	return ((c <= 122 && c >= 97) || (c <= 90 && c >= 65) ? 1 : 0);
}
