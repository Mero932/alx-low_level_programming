#include "lists.h"
/**
 * free_listint2 - free listing
 * @head: int
 */
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
return;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
*head = NULL;
}
