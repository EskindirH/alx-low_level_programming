#include "main.h"

/**
 * *_strcpy - copies the string.
 * @dest: destination of the copied string
 * @src: source to copy from
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
