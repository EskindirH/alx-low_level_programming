#include<stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
