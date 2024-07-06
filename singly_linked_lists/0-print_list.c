#include <stdio.h>
#include "lists.h"

void print_list(const list_t *head)
{
const list_t *current = head;

while (current != NULL)
{
printf("str: %s, len: %u\n", current->str, current->len);
current = current->next;
}
}
