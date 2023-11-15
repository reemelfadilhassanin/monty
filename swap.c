#include "monty.h"
/**
 * swap - Swaps the top two elements
 * @stack: Pointer to the stack
 * @line_number: line nuber in the file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	int value;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		err(6, line_number);
		return;
	}
	tmp = *stack;
	value = tmp->n;
	tmp->n = value;

	tmp->n = tmp->next->n;
	tmp->next->n = value;
}
