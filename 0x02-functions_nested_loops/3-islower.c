#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: int to check
 *
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}
