#include "monty.h"

/**
 * rotl - function to rotate from last of stack to the top
 * @stack: double pointer to the stack head
 * @line_num: Line number
 * Return: nothing
 */
void rotl(stack_t **stack, unsigned int line_num)
{
	stack_t *new_head;
	stack_t  *current;
	(void) line_num;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
new_head = (*stack)->next;
current = *stack;


while (current->next != NULL)
{
	current = current->next;
}
current->next = *stack;
(*stack)->next = NULL;
(*stack)->prev = current;
(*stack) = new_head;
}
