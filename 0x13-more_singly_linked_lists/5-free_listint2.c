#include "lists.h"

/**
 * free_listint2 - To frees a linked list
 * @head: pointer to the listint_t list to be freed
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
