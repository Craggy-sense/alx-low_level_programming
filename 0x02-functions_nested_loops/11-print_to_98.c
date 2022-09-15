#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -prints all the integers btn the number given and 98
 * @n: number to count from
 * Return: void
 */
void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
				printf ("%d, ", i);
			{
				printf ("%d\n", i);
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; n <= 98; i++)
		{
			if (i != n)
				printf ("%d, ", i);
			{
				printf ("%d\n", i);
			}
		}
	}
}
