#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - print name using pointer to function
*@name: string to print
*@f: pointer function
* Return void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
* name_print - print out name
* @name: string to print
*/

void name_print(char *name)
{
	printf("%s\n", name);
}
