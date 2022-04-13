#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - select the correct function
 * @s: passed operator
 * Return: type of operator to be used
 */
int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
  };
  int i;

  i = 0;

  while (ops[i].op != NULL)
    {
      if (ops[i].op[0] == s[0] && s[1] == '\0')
	
	  return (ops[i].f);
	}
      i++;
    }
  return (NULL);
}
