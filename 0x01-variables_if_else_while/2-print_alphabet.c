#include<stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
