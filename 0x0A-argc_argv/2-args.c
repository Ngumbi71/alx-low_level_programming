#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
