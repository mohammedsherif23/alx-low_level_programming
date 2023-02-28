#include "main.h"

/**
* print_array - print number of elements of an array
* @a: array to be printed
* @n: number of elements in an array
* Return: void
*/

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);

		if (x != (n - 1))
			printf(", ");
		x++;
	}
	putchar('\n');
}
