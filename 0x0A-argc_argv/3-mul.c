#include <stdio.h>
#include <stdlib.h>

/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	argc = argc;
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
