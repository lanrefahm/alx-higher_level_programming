#include <stdlib.h>
#include "list.h"

/**
 * check_cycle - checks if a singly-linked list contains a cycle
 * @list: A singly-linked list
 *
 * Return: If there is no cycle - 0.
 *	if there is a cycle - a.
 */
int check_sycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
