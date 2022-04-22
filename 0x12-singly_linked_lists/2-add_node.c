#include "list.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head of the node
 * @str: string to be duplicated
 * Return: new header
 */
list_t *add_node(list_t **head, const char *str)
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
t->next = *head;
*head = t;

return (t);
}
