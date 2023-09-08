#include<stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		if (n == 58)
			n += 39;
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
