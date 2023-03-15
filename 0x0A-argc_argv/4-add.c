#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* add_positive_numbers - check and add all positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 always
*/

int add_positive_numbers(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		int ispositive = 1;
		int j;
		int num;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				ispositive = 0;
				break;
			}
		}
		if (!ispositive)
		{
			printf("Error\n");
			return (-1);
		}
		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (-1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}
/**
* main - main function
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 always
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	return (add_positive_numbers(argc, argv));
}
