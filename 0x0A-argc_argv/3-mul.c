#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply 2 numberd
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);

}
