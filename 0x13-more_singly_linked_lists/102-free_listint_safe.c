#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node
 * Return: size of free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	int diff;
	listint_t *temp;
	size_t num = 0;

	if (!h || !*h)
		return (0);
	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;
	return (num);
}
