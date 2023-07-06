#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 * Return: adress of node where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head, *temp = head;

	if (!head)
		return (NULL);
	while (ptr && temp && temp->next)
	{
		temp = temp->next->next;
		ptr = ptr->next;
		if (temp == ptr)
		{
			temp = head;
			while (ptr != temp)
			{
				ptr = ptr->next;
				temp = temp->next;
			}
			return (temp);
		}
	}
	return (NULL);
}
