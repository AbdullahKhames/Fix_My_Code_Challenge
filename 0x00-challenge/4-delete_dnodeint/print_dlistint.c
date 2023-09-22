#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linkedlist of integers
 *
 * @h: A pointer to the first element of a list
 *
 * Return: The number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	n = 0;
	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
