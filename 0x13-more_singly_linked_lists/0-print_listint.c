#include "lists.h"
/**
 * print_listint - prints all the elements in the list
 * @h: pointer to the head of said list
 * Return: num
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num)
}
