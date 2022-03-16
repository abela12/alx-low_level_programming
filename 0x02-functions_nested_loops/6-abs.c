#include "main.h"
/**
 * _abs - returns absolute value of an int
 * @n: integer from which to get an absolute value
 * Return: Void.
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
