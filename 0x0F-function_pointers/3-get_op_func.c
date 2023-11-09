#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - get functio operator
 * @s: operator symbol
 * Return: num 1 operator num 2
 */
int  (*get_op_func(char *s))(int, int)
{
	size_t i;

	int (*ptr_arr[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	char op[] = "+-*/%";

	i = 0;
	while (i < 5)
	{
		if (*s == op[i])
			return (ptr_arr[i]);
		i++;
	}
	return (NULL);
}
