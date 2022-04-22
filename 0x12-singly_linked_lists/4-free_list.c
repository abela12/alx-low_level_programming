#include "main.h"

/**
 * free_list - Free a list
 * @head: start of the list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *t;

if (head == NULL)
return;

while (head != NULL)
{
t = head;
head = head->next;
free(t->str);
free(t);
}
}
