#include "sort.h"
listint_t *_swap(listint_t **current, listint_t **sorted);
/**
 * insertion_sort_list - function that sorts a doubly linked
 * list of integers in ascending order using the Insertion
 * sort algorithm
 * @list: pointer to the head of a doubly-linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *swap;

