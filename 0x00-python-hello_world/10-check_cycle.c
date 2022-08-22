#include "lists.h"
/**
 * check_cycle - checks if a linked list has a cycle
 * @list: variable
 * Return: 0 if there is a cylce, 1 if not cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *current;

	if (list == NULL)
		return (0);

	current = list->next;

	while (current != NULL)
	{
		if (current == list)
			return (1);
		current = current->next;
	}

	return (0);
}
