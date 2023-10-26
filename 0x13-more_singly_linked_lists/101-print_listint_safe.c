#include "lists.h"

/**
 * print_listint_safe - return number of nodes
 *@head: int
 * Return: Always count.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
const listint_t *temp; 
*temp = NULL;
*current = head;
size_t count = 0;
while (current != NULL) 
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
if (current > current->next) 
{
temp = current->next;
while (temp != current) 
{
printf("[%p] %d\n", (void *)temp, temp->n);
count++;
temp = temp->next;
}
printf("-> [%p] %d\n", (void *)current, current->n);
return (count);
}
current = current->next;
}
return (count);
}
