#include "holberton.h"
/**
 * _atoi - int
 * @s: pointer
 * Return: int.
 */
int _atoi(char *s)
{
	int i;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}
