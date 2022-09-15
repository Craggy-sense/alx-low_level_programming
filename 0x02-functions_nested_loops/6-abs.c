#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @k: integer whose absolute value to find
 * Return int:
 */
int _abs(int k)
{
	if (k < 0)
	{
		return (k * -1);
	}
	else
	{
		return (k);
	}
}

