/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes in the list
 */
#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int len = 0;

	if (h == NULL)
		printf("Linked List is empty");

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		len++;
	}

	return (len);
}
