#include "main.h"
#include <math.h>

/**
 * factorial - returns value of x power y
 * @n: int value
 * @y: int value
 *
 * Returns: value of x power y
 */



int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}



