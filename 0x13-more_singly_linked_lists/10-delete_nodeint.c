#include "lists.h"
/**
 * delete_nodeint_at_index - insert node at a given position
 * @head: int
 * @index: unsigned int
 * Return: -1, 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
if (*head == NULL)
return (-1);
listint_t *current = *head;
listint_t *prev = NULL;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
for (i = 0; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}
if (current == NULL)
return (-1);
prev->next = current->next;
free(current);
return (1);
}
