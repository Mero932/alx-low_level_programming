#include ""lists.h"
/**
* add_nodeint - singly linked list
* @n: integer
* @head: listint
*
* Return: newNode
*/
listint_t* add_nodeint(listint_t** head, const int n)
{
listint_t* newNode;
newNode = (listint_t*)malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
