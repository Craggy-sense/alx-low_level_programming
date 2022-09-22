#include "main.h"

/**
 * _strcat - two words
 * @dest: pointer to char param
 * @src: pointer to char param
 * @n: int param
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int z;
	int k;

	n = 0;

	for (k = 0; k < 1000; k++)
	{
		if (dest[k] == '\0')
		{
			break;
		}
		z++;
	}

	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[z + k] = src[k];
	}

	dest[z + k] = '\0';

	return (dest);
}
