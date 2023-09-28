#include "main.h"
/**
 *sqrt_a -  gives natural square root of a number
 *
 * @a: number
 * @b: iterator
 * Return: square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion -  gives natural square root of a number
 *
 * @n: input number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
