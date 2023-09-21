#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pinter
 *
 * Return: pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int countDest = 0, countSrc = 0;

	while (*(dest + countDest) != '\0')
		countDest++;

	while (countSrc >= 0)
	{
		*(dest + countDest) = *(src + countSrc);
		if (*(src + countSrc) == '\0')
			break;
		countDest++;
		countSrc++;
	}
	return (dest);
}
