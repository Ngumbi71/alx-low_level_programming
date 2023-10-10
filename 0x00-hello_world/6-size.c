#include <stdio.h>
/**
 * main - Entry
 * Return: returns 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of a char: %zu byte(s)", (unsigned long)sizeof(a));
printf("Size of an int: %zu byte(s)", (unsigned long)sizeof(b));
printf("Size of a long int: %zu byte(s)", (unsigned long)sizeof(c));
printf("Size of a long long int: %zu byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)", (unsigned long)sizeof(e));
printf("\n");
return (0);
}
