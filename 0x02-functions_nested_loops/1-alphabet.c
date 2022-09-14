#include "main.h"

/**
 * main - print abc
 * describe: prints lowercase and uppercase
 * return: 0
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
