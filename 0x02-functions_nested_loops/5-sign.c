#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: postive, zero or negative interger
 * Return: 1 if +ve 0 it is 0 and -1 if -ve
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
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
