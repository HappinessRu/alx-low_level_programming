#include "lists.h"
/**
 * print_list - prints the elements of list_t
 * @h: pointer to linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		r++;
		h = h->next;
	}
	return (r);
}
