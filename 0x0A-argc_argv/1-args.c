#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /* note to ignore argv */

	printf("%d\n", argc - 1);
		return (0);
}
