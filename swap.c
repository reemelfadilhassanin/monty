#include "monty.h"
/**
 * swap - Swaps the top two elements
 * @stack: Pointer to the stack
 * @line_number: line nuber in the file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int idx = 0, value;

	tmp = *stack;
	while (tmp)
	{
		tmp = tmp->next;
		idx++;
	}
	if (idx < 2)
	{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
	}
	tmp = *stack;
	value = tmp->n;
	tmp->n = value;
	tmp->n = tmp->next->n;
	tmp->next->n = value;
}
