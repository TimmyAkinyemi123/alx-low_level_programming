#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - number of nodes in lined list
 * @head: pointer to listint_t
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *foxy, *brown;
	size_t items = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	foxy = head->next;
	brown = (head->next)->next;
	while (brown != NULL)
	{
		if (foxy == brown)
		{
			foxy = brown;
			while (foxy != brown)
			{
				items++;
				foxy = foxy->next;
				brown = brown->next;
			}
			foxy = foxy->next;
			while (foxy != brown)
			{
				items++;
				foxy = foxy->next;
			}
			return (items);
		}
		foxy = foxy->next;
		brown = brown->next->next;
	}
	return (0);
}
/**
 * print_listint_safe - print list safely
 * @head: pointer to listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t items, index = 0;

	items = looped_listint_len(head);

	if (items == 0)
	{
		for (; head != NULL; items++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < items; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (items);
}
