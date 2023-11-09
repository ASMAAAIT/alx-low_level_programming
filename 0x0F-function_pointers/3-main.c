#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main function
 * @argc: argv counter
 * @argv:  arguments passed to the fn
 * Return: ans
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && (num1 == 0 || num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ans = ptr(num1, num2);
	printf("%d\n", ans);
	return (0);
}
