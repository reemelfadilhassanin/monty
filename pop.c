#include "monty.h"

/**
* pop - function that remove element in top
* @stack: pointer to head of stack
* @line_cnt: Line number of the opcode in the file
*
* Return: void
*/
void pop(stack_t **stack, unsigned int line_cnt)
{
	stack_t *pop = NULL;

	if (!stack || !*stack)
	{
		err(5, line_cnt);
		
		return;
	}

	pop = (*stack)->next;
	free(*stack);
	*stack = pop;
	if (*stack == NULL)
		return;
	(*stack)->prev = NULL;
}
