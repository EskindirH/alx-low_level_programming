#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string pointer
 * @s2: string pointer
 *
 * Return: 0 if s1 equals s2, positive integer if s1 greater than s2,
 * elese negative number
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res = 0;
	
	while (res == 0)
	{
		if ((*(s1 + i) == '\0') || (*(s2 + i) == '\0'))
			break;
		res = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (res);
}
