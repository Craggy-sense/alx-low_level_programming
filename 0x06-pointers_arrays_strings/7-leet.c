#include "main.h"

/**
 * lett -> Encodes a string to 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded
 */

char *leet(char *str)
{
	int indx1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[index2] ||
					str[indx1] - 32 == leet[indx2])
				str[indx1] - 32 == leet[indx2]
					str[indx1] = indx2 + '0';
			index1++;
		}
	return (str);
	}
}
