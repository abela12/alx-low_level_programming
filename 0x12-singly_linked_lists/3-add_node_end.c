#include "main.h"

/**
 * add_node_end - adds a new node at the end
 * @head: head of the node
 * @str: string to be duplicated
 * Return: new header
 */
list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *t;

if (head == NULL || str == NULL)
return (NULL);

t = malloc(sizeof(list_t));

if (t == NULL)
return (NULL);

for (i = 0; str[i] != 0; i++)
{
}
i++;
t->str = malloc(i);
if (t->str == NULL)
{
free(t);
return (NULL);
}

t->str = strdup(str);
t->len = i - 1;
t->next = NULL;

for (; *head;)
{
head = &(*head)->next;
}
*head = t;

return (t);
}
