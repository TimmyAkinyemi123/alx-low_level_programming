#include "lists.h"
/**
 * find_listint_loop - find loop in listint_t
 * @head: pointer to the first node
 * Return: NULL or address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (ptr && temp && temp->next)
	{
		temp = temp->next->next;
		ptr = ptr->next;
		if (temp == ptr)
		{
			ptr = temp;
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
