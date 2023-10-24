#include "lists.h"
/**
 * delete_nodeint_at_index - delete any node
 *@head: unsigned int
 * @index: int
 * Return: 1, -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t * prev;
unsigned int i;
if (*head == NULL)
return (-1);
prev = NULL;
if (!index)
{
current = *head;
*head = current->next;
free(current);
return (1);
}
current = *head;
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

