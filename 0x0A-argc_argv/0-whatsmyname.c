#include "main.h"
#include <stdio.h>
/**
 * main - program prints its name, followed by a new line
 * Description: if name is renamed the program will print new name
 * @argc: argurment count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
