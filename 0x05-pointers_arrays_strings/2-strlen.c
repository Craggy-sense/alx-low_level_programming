#include "main.h"

/**
 * _strlen - length of a string
 * @s: oinput char
 * Return: length of a string
 */

int _stlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;

	}
	return (len);
}
