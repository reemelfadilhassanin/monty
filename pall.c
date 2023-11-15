#include "monty.h"
/**
 * pall - function to prints all the element add on the stack
 * @stack: Pointer to the head of the stack
 * @line_number: Line number of the opcode in the file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
