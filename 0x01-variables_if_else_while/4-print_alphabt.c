#include <stdio.h>
/**
* main - Program Entry point
* Return: 0 (success)
*/
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
