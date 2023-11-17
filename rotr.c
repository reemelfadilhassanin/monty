#include "monty.h"

/**
 * rotr - function to rotate stack to the bottom
 * @stack: double pointer point to the stack head
 * @line_num: Line number
 * Return: nothing
 */
void rotr(stack_t **stack, unsigned int line_num)
{
stack_t *tp;
tp = *stack;

	(void) line_num;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
while (tp->next)
{
	tp = tp->next;
}
tp->next = *stack;
tp->prev->next = NULL;
tp->prev = NULL;
(*stack)->prev = tp;
(*stack) = tp;
}
