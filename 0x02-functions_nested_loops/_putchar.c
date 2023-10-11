#include <unistd.h>
/**
 * _putchar - write char c to stdout
 * @c: character to print
 * error: -1 return
 * Return: 1
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
