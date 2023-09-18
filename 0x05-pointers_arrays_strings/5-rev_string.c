#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: character pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int counter = 0, i, j;
	char *str, temp;

	str = s;
	while (*(s + counter) != '\0')
		counter++;

	for (i = 0; i < (counter - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
