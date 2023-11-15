#include "monty.h"
/**
 * swap - Swaps the top two elements
 * @stack: Pointer to the stack
 * @line_number: line nuber in the file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;
	

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		err(6, line_number);
		return;
	}
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp; 
}
