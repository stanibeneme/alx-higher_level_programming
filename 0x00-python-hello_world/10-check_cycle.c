#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - This Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *snail, *turbo;

	if (list == NULL || list->next == NULL)
		return (0);

	snail = list->next;
	turbo = list->next->next;

	while (snail && turbo && turbo->next)
	{
		if (snail == turbo)
			return (1);

		snail = snail->next;
		turbo = turbo->next->next;
	}

	return (0);
}
