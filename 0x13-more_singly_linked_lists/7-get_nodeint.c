#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index: index of node starting at 0
 * Return: NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
while (i < index && head != NULL)
{
head = head->next;
i++;
}
return (head);
}
