#include "main.h"
/**
 * _pow_recursion - raises a number to the power of another number
 *
 * @x: number
 * @y: power
 *
 * Return: result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
