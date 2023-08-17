#include "lists.h"
/**
 * print_dlistint - Print all elements of a list
  * @h: Pointer to the first element in a list
  * Return: The number of elements in the list
  */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
