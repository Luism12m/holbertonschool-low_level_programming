#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_list - Frees a list_t list.
* @head: A pointer to the head of the list.
*
* Description: Frees all nodes of a list_t linked list.
*/
void free_list(list_t *head)
{
list_t *current = head;
list_t *next;

while (current != NULL)
{
next = current->next;
free(current->str); /* Liberamos la memoria de la cadena strdup*/
free(current);      /* Liberamos la memoria del nodo actual*/
current = next;
}
}
/**
* print_list - Prints all elements of a list_t list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*
* Description: Prints each node's len and str of a list_t list.
*/
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;

while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", current->len, current->str);
}
current = current->next;
count++;
}
return (count);
}
