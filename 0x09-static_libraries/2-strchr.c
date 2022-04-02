#include "holberton.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
