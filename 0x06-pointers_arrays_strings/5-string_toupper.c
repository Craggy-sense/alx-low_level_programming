#include "main.h"

/**
 * string_toupper -> changes all lowercase letters
 *
 * @s: the string to be changed.
 *
 * Return: A pointer to the changed string
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
}
