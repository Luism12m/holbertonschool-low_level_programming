#ifndef LIST_H
#define LIST_H

typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;
} list_t;

void print_list(const list_t *head);

#endif /* LIST_H */
