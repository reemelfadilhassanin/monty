#include "monty.h"
/**
* add - add the stack elemnts
* @stack: stack pointer
* @line_num: number of the lines for perr
*/
void add(stack_t **stack, unsigned int line_num)
{
	stack_t *cur, *next;
	int i = 0, x, y;

	for (i = 0; cur != NULL; i++)
		cur = cur->next;
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	cur = *stack;
	next = (*stack)->next;
	x = cur->n;
	y = next->n;

	(*stack) = next;
	next->prev = NULL;
	next->n = x + y;
}
