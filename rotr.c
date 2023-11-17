#include "monty.h"

/**
 * rotr - function to rotate stack to the bottom
 * @stack: double pointer point to the stack head
 * @line_num: Line number
 * Return: nothing
 */
void rotr(stack_t **stack, unsigned int line_num)
{
	stack_t *tmp;
	tmp = *stack;
	(void) line_num;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
while (tmp->next)
{
	tmp = tmp->next;
}
tmp->next = *stack;
tmp->prev->next = *stack;
tmp->prev = NULL;
(*stack)->prev = tmp;
(*stack) = tmp;
}
