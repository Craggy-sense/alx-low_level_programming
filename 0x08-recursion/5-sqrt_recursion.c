#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of n
 * @n: natural square root
 * Return: result of the power
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (actual_sqrt_recursion(n, 0));
}
