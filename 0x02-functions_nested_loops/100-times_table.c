#include "main.h"
/**
 * putThreeDigits - print 3 digits
 * @prod: product of main loop
 */
void putThreeDigits(int prod)
{
	_putchar(prod / 100 + 48);
	_putchar((prod / 10) % 10 + 48);
	_putchar(prod % 10 + 48);
}

/**
 * putTwoDigits - print 2 digits
 * @prod: product of main loop
 */
void putTwoDigits(int prod)
{
	_putchar(' ');
	_putchar(prod / 10 + 48);
	_putchar(prod % 10 + 48);
}
/**
 * putOneDigit - print 1 digit
 * @prod: product of main loop
 */
void putOneDigit(int prod)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(prod + 48);
}

/**
 * print_times_table - print multiplication table for factor of n
 * @n: integer n
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar(48);
					continue;
				}
				prod = i * j;
				_putchar(',');
				_putchar(' ');
				if (prod >= 100)
				{
					putThreeDigits(prod);
				} else if (prod >= 10)
				{
					putTwoDigits(prod);
				} else
				{
					putOneDigit(prod);
				}
			}
		_putchar('\n');
		}
	}
}