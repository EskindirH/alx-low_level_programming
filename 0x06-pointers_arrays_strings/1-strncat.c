#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to copy from
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int countSrc, countDest;

	countSrc = 0;
	countDest = 0;
	while (*(dest + countDest) != '\0')
		destCount++;

	while (countSrc < n)
	{
		*(dest + countDest) = *(src + countSrc);
		if (*(src + countSrc) == '\0')
			break;
		countDest++;
		countSrc++;
	}
	return (dest);
}
