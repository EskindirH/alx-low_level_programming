#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to find
 *
 * Return: a pointer to the first occurrence of the character c or null
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return ((char *) s);
	} while (*s++);
	return ('\0');
}
