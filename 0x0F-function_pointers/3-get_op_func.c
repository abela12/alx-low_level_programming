#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
<<<<<<< HEAD
 * get_op_func - ...
 * @s: ...
 *
 * Return: ...
 */
=======
  * get_op_func - ...
  * @s: ...
  *
  * Return: ...
  */
>>>>>>> 27b4117ba9e8f5489dde71fcc3fe32e3019c6dfa
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
<<<<<<< HEAD
	{ "/", op_div }
=======
	{ "/", op_div },
>>>>>>> 27b4117ba9e8f5489dde71fcc3fe32e3019c6dfa
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
<<<<<<< HEAD
		
=======

>>>>>>> 27b4117ba9e8f5489dde71fcc3fe32e3019c6dfa
		i++;
	}

	return (0);
}
