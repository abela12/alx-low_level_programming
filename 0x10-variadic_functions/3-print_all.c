#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * pr_integer - Print an integer
 * @i: The list of numbers
 *
 * Return: Nothing
 */
void pr_integer(va_list i)
{
  printf("%d", va_arg(i, int));
}

/**
 * pr_char - Print a char
 * @c: The list of numbers
 *
 * Return: Nothing
 */
void pr_char(va_list c)
{
  printf("%c", va_arg(c, int));
}

/**
 * pr_float - Print a float
 * @f: The list of numbers
 *
 * Return: Nothing
 */
void pr_float(va_list f)
{
  printf("%f", va_arg(f, double));
}

/**
 * pr_string - Print a string
 * @s: The list of numbers
 *
 * Return: Nothing
 */
void pr_string(va_list s)
{
  char *str;

  str = va_arg(s, char *);
  if (str == NULL)
    str = "(nil)";
  printf("%s", str);
}

/**
 * print_all - Print numbers using a separator
 * @format: The format to print
 * @...: The list of values to print
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
  char *separator = "";
  va_list valist;
  unsigned int k = 0, l = 0;
  op_t ops[] = {
    {"c", pr_char},
    {"i", pr_integer},
    {"f", pr_float},
    {"s", pr_string},
    {NULL, NULL}
  };

  va_start(valist, format);

  while (format != NULL && *(format + k) != '\0')
    {
      l = 0;
      while (ops[l].op != NULL)
	{
	  if (*(format + k) == ops[l].op[0])
	    {
	      printf("%s", separator);
	      ops[l].f(valist);
	      separator = ", ";
	    }
	  l++;
	}
      k++;
    }
  printf("\n");
  va_end(valist);
}
