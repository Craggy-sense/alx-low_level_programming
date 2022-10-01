#include "main.h"
#include <stdio.h>

/**
 * main: prints the number of arguments passed into it
 * description: program should print a number, followed by a new line
 * @argc: number
 * @argv: vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int sum;
	for (sum = 0; sum <argc; sum++)
	{
		*argv[sum] = *argv[sum];
	}
	prinf("%d\n", (sum - 1));
	return (0);
}
