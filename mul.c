#include "monty.h"
/**
* mul - add the stack elemnts
* @stack: stack pointer
* @line_num: number of the lines for perr
*/
void mul(stack_t **stack, unsigned int line_num)
{
	int x, y;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	x = (*stack)->n;
	y = (*stack)->next->n;

	(*stack)->next->n = x * y;

	pop(stack, line_num);
}
