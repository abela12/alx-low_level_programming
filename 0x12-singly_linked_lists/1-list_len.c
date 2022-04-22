#include "list.h"
/**
 * list_len - number of elements on a list
 * @h: header
 * Return: int i
 */
size_t list_len(const list_t *h)
{
int i;

for (i = 0; h; i++)
{
h = h->next;
}
return (i);
}
