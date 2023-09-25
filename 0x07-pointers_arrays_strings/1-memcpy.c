#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: memory destination char pointer
 * @src: memory source char pointer to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
