#include "lists.h"
/**
 * print_listint - Print all the elements of a listint_t list
 * @h: (const)
 * Return: size_t The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}

