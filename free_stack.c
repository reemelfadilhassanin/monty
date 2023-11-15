#include "monty.h"
/**
* free_stack - free the stack after reaching EOF
* @head: the stack pointer
* Return: void
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
