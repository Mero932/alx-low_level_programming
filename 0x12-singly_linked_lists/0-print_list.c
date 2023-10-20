#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * Calculates the length of a null-terminated string.
 *
 * @param str: A pointer to the null-terminated string.
 * @return: The length of the string.
 */
int _strlen(const char* str) 
{
int length = 0;
if(!s)
return(0);
while (*s++)
length ++;
return (length);
}

/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: int  A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list
 */

size_t print_list(const list_t *h);
{
size_t count = 0;
while (h)
{
printf("[%d] %s\n ", _strlen(h->str), h->str ? h->str : "nil");
h =  h->next;
count++;
}
return (count);
}
