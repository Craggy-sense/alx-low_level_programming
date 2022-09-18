#include "main.h"

/**
 * print_alphabet_x10 - prints abc 10 times
 *
 * Description: abc will be printed 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}

	_putchar('\n');
}
