#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int x, y;

	for (x = 0 ; x < 10 ; x++)
	{
		_putchar('0');
		for (y = 1 ; y < 10 ; y++)
		{
			int mult = y * x;

			_putchar(',');
			if (mult / 100 == 0)
			{
				_putchar(32);
			}
			if (mult / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (mult / 10));
			}
			if (mult % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (mult % 10));
			}
		}
		_putchar('\n');
	}
}
