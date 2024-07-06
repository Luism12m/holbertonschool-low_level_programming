#ifndef LIST_H
#define LIST_H


typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

#define nil "nil"

void free_list(list_t *head);
size_t print_list(const list_t *h);

#endif 
