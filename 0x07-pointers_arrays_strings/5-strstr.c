#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the located string segment, or a null.
 */
char *_strstr(char *haystack, char *needle)
{
	char *c, *s;

	while (*haystack != '\0')
	{
		c = haystack;
		s = needle;

		while (*haystack != '\0' && *s != '\0' && *haystack == *s)
		{
			haystack++;
			s++;
		}
		if (!*s)
			return (c);
		haystack = c + 1;
	}
	return ('\0');
}
