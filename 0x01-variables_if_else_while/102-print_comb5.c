#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: integer 0 when exited normally
 */
int main(void)
{
	int i, j, k, q, co1, co2;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (q = 48; q <= 57; q++)
				{
					co1 = (i * 10) + j;
					co2 = (k * 10) + q;
					if (co1 < co2)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(q);
						if (q == 57 && k == 57 && i == 57 && j == 56)
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
