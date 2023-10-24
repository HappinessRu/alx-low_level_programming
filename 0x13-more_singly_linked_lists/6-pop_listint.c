#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 * Return: o if list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *current;
listint_t *temp;
int hnode;
if (*head == NULL)
return (0);
current = *head;
hnode = current->n;
temp = current->next;
free(current);
*head = temp;
return (hnode);
}
