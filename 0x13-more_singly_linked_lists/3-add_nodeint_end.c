#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to first element in list
 * @n: data to insert in the new element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
listint_t *temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (*head);
}
