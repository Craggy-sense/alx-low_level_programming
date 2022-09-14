#include "main.h"
/**
 * print_sign-prints sign of a number
 * @n: character to be verified
 * Return: return 0 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putcher('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
