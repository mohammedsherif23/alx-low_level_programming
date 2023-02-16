#include <stdio.h>
/**
 * main - a program that print the size of various type of computer
 * Return: 0(Success);
 */
int main(void)
{

	printf("Size of char: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
