#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node
 * @head: int
 * @index: unsigned int
 * Return: NULL, current
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *current = head;
while (current != NULL)
{
if (i == index)
return (current);
i++;
current = current->next;
}
return (NULL);
}
