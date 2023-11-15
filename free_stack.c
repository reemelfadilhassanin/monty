#include "monty.h"
/**
* free_stack - print the list
* @head: DLL
* Return: number
*/
void free_stack(stack_t *head)
{
	stack_t *cur, *next;

	cur = head;
	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}
