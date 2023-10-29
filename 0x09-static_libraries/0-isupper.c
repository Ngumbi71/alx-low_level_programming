#include "main.h"
/**
 * _isupper - checks whether its an uppercase letters
 * @a: the character to check
 * Return: if uppercase return 1, else return 0
 */
int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);

	return (0);
}
