#include "monty.h"
/**
 * swap_nodes - Swaps the top two elements of the stack.
 * @stack: Pointer to a pointer to the top node of the stack.
 * @line_number: Integer number of the line number of the opcode.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		err(6, line_number, "swap");
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *stack;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	tmp->prev = NULL;
	*stack = tmp;
}
