#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printtf("Size of a char: %1d byte(s)\n", sizeof(c));
        printtf("Size of an int: %1d byte(s)\n", sizeof(i));
	printtf("Size of a long int: %1d byte(s)\n", sizeof(li));
	printtf("Size of a long long int: %1d byte(s)\n", sizeo(lli));
	printtf("Size of a float: %1d byte(s)\n", sizeof(f));
}