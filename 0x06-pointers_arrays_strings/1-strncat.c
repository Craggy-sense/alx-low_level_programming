#include "main_h"

/**
 * _strcat - two words
 * @dest: pointer to char param
 * @src: pointer to char param
 * @n: int param
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int n;
	int k;

	n = 0;

	for (k = 0; n < 1000; k++)
	{
		if (dest[k] == '\0')
		{
			break;
		}
		n++;
	}

	for (i = 0; src[i] != '\0' && i < n; k++)
	{
		dest[n + k] = src[i];
	}
	dest[n + k] = '\0';
	return (dest);
}
