#include "main.h"

/**
* rev_string - reverse a string
* @s: string to be reverse
* Return: void
*/

void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	char last;

	while (*s)
	{
		s++;
		count++;
	}
	for (i = 0; i < count; i++)
		s--;
	for (i = 0; i < (count / 2); i++)
	{
		int last1 = count - 1;

		last = s[last1 - i];
		s[last1 - i] = s[i];
		s[i] = last;
	}

}
