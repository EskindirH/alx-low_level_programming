#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0 to stdout
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			m = i * j;
			_putchar(',');
			_putchar(' ');
			if (m <= 9)
			{
				_putchar(' ');
				_putchar(m + 48);
			}
			else
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
