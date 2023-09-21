#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: character pointer
 *
 * Return: str
 */
char *leet(char *str)
{
	int leets[] = {52, 51, 48, 55, 49};
	int lower[] = {97, 101, 111, 116, 108};
	int i, count = 0;

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((*(str + count) == lower[i]) || (*(str + count) == (lower[i] - 32)))
			{
				*(str + count) = leets[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
