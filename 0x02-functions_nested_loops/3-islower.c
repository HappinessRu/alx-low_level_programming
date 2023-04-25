#include "main.h"
/**
  *_islower - returns 1 if input is a
  *lowercase character , another case shows
  *0
  *@c - the character is in ASCII code
  *
  *Return:  1 for lowercase,0 for other
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
