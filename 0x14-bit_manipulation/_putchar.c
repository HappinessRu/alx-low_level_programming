#include <unistd.h>

/**
 * _putchar - writes the character c to standard ouput
 * @c: character to be printed
 * Retun: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
