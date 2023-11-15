#include "monty.h"

/**
 * sub - Subtracts the top two element of the stack
 * @stack: Pointer to pointer point to the top of the stack.
 * @line_number: number line in file.
 */
void sub(stack_t **stack, unsigned int line_number)
{
int sub;
stack_t *tmp;
if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
{
	err(7, line_number);
	
	}
tmp = *stack;
sub = (tmp->next->n) - (tmp->n);
pop(stack, line_number);
(*stack)->n = sub;
}
