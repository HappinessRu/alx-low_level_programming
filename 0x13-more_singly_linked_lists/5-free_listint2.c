#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to linked list to be freed
 */
void free_listint2(listint_t **head)
{
if (head != NULL && *head != NULL)
{
listint_t *current;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
}
}
