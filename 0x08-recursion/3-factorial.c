#include "main.h"
/**
 * factorial - gets factorial of a given number
 *
 * @n: number which we will get factorial of
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
			}
