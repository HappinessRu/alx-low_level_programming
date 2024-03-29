#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, bitcount = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			bitcount++;
	}
	return (bitcount);
}
