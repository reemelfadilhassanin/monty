#include "monty.h"
/**
* divv - division function
* @stack: pointer to the stack
* @line_num: line number for perr
*/
void divv(stack_t **stack, unsigned int line_num)
{
	int x, y;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	x = (*stack)->n;
	y = (*stack)->next->n;

	if (x == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = y / x;
	pop(stack, line_num);

}
