#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list of type listint_t to traverse
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
