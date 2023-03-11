#include "sort.h"

/**
 * insertion_sort_list - Sorts a list of integers using the
 * insertion sort algorith
 *
 * Description: Starting from index 0, each element is compared
 * with the one before it and swapped if necessary. The same element
 * is continuously compared against those before it until a swap
 * is no longer necessary
 *
 * @list: A pointer to a list of integers
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head2, *cur_ptr, *prev_ptr, *save_ptr;

	if (list == NULL)
		return;

	head2 = (*list)->next;
	while (head2)
	{
		cur_ptr = head2;
		save_ptr = head2->next;

		while (cur_ptr->prev && cur_ptr->prev->n > cur_ptr->n)
		{
			prev_ptr = cur_ptr->prev;
			/**** SWAP ITEMS *****/
			if (!cur_ptr->prev->prev) /*First element*/
				cur_ptr->prev = NULL; /*1*/
			else
				cur_ptr->prev = prev_ptr->prev; /*1*/

			if (!cur_ptr->next) /*Last element*/
				prev_ptr->next = NULL; /*2*/
			else
				prev_ptr->next = cur_ptr->next; /*2*/

			cur_ptr->next = prev_ptr; /*3*/
			prev_ptr->prev = cur_ptr; /*4*/

			if (cur_ptr->prev == NULL) /*First element*/
				*list = cur_ptr; /*5*/
			else
				cur_ptr->prev->next = cur_ptr; /*5*/

			if (prev_ptr->next) /*All except last element*/
				prev_ptr->next->prev = prev_ptr; /*6*/

			print_list(*list);
		}
		head2 = save_ptr;
	}
}
