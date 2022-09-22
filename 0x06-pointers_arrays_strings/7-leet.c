#include "main.h"

/**
 * lett -> Encodes a string to 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded
 */

char *leet(char *str)
{
	int i = 0, j;
	char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = {'A', 'E', 'O', 'T', 'L'},
	     leet[] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == a[j] || str[i] == b[j])
				str[i] = leet[j];
			j++;

		}

		i++;
	}

	return (c);
}
