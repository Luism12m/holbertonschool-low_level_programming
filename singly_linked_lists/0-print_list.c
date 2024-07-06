#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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

size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;

while (current != NULL)
{
printf("str: %s, len: %u\n", current->str, current->len);
current = current->next;
count++;
}

return count;
}
