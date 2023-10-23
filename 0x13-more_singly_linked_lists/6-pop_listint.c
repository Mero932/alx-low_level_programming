#include "lists.h"
/**
 * pop_listint - delete the hed of the node
 * @head: int
 * Return: data, 0
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;
if (*head == NULL)
return (0);
temp = *head;
*head = (*head)->next;
data = temp->n;
free(temp);
return (data);
}
