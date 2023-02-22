#include "main.h"
/**
* _abs - computes the absolute value of an integer
*@z: parameter to compute
* Return: 0
*/

int _abs(int z)
{
	int x;

	if (z < 0)
	{
		x = z * -1;
		return (x);
	}
	return (z);
}
