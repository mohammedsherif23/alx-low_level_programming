#include "main.h"
#include <stdio.h>

/**
* main - main function
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 always
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
