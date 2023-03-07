#include "main.h"

/**
 * _strlen - length of a string
 * @s: oinput char
 * Return: length of a string
 */

int _stlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;

	}
	return (len);
}
