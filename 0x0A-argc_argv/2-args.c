#include "main.h"
#include <stdio.h>

/**
* main - main function
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 always
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
