#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*o_f)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	o_f = get_op_func(argv[2]);

	if (!o_f)
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", o_f(a, b));

	return (0);
}
