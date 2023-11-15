#include "monty.h"

/**
 * pint - Prints the value at the top of the stack, followed by a new line.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode in the file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
stack_t *pint;
	pint = *stack;
	if (!pint)
		err(4, line_number);
	printf("%d\n", pint->n);
}
