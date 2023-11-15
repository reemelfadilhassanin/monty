#include "monty.h"
/**
* add - add the stack elemnts
* @stack: stack pointer
* @line_num: number of the lines for perr
*/
void add(stack_t **stack, unsigned int line_num)
{
	int x, y;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	x = (*stack)->n;
	y = (*stack)->next->n;

	(*stack)->next->n = x + y;

	pop(stack, line_num);
}
