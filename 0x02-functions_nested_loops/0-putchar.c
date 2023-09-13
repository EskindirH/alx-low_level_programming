#include "main.h"
/**
 * main - program entyr point
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i, size;

	size = sizeof(str) / sizeof(str[8]);

	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
