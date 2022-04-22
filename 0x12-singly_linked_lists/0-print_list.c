#include "main.h"

/**
 * print_list - prints all the elements of a list
 * @h: header
 * Return: count being i
 */
size_t print_list(const list_t *h)
{
int i;

if (h == NULL)
return (0);

for (i = 0; h; i++)
{
if (h->str != NULL)
{
printf("[%u] ", h->len);
}
else
{
printf("[%u] ", 0);
}
if (h->str != NULL)
{
printf("%s\n", h->str);
}
else
{
printf("%s\n", "(nil)");
}
h = h->next;
}
return (i);
}
