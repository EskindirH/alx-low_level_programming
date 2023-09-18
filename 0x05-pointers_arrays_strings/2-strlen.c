#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to a character
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
