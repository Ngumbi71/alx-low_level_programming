#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks whether the string are digits
 * @str: an array string
 * Return: 0, else 1
 */
int check_num(char *str)
{
	/* variable declaration*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*counts the string*/
	{
		if (!isdigit(str[count])) /* checks whether the string are digits*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints programs'sname
 * @argc: counts the arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* variable declaration */
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* go through array */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* atoi - converts string to int */
			sum += str_to_int;
		}
		/* if one of the numbers contains symbols */
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
