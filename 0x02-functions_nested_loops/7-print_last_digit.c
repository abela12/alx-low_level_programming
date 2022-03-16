#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
		_putchar(n + '0');
		return (n);
}
