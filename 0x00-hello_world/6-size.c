#include <stdio.h>
/**
 * main - a program that print the size of various type of computer
 * Return: 0(Success);
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of char: %lu .\n", sizeof(c));
	printf("Size of an int: %lu .\n", sizeof(i));
	printf("Size of a long int: %lu .\n", sizeof(a));
	printf("Size of a long long int: %lu .\n", sizeof(b));
	printf("Size of a float: %lu .\n", sizeof(f));
	return (0);
}
