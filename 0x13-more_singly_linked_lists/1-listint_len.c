#include "lists.h"
/**
 * listint_len - Print all the elements of a listint_t list
 * @h: (const)
 * Return: size_t The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}

