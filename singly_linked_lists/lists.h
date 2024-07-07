#ifndef LIST_H
#define LIST_H
/*
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
* Description: singly linked list node structure
*/
typedef struct list_s
{
char *str;
unsigned int len;
/* Description: structlists node structure*/
struct list_s *next;
} list_t;
#define NIL "nil"
/**
* free_list - Frees a list_t list.
* @head: A pointer to the head of the list.
*
* Description: Frees all nodes of a list_t linked list.
*/
void free_list(list_t *head);
/**
* print_list - Prints all elements of a list_t list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*
* Description: Prints each node's len and str of a list_t list.
*/
size_t print_list(const list_t *h);
#endif
