#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: puntero del array.
 * @n: numero de elementos del array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
