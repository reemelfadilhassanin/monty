#include "monty.h"
/**
 * push - Pushes an element to the stack
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number of the opcode in the file
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n");
	int num;
	 stack_t *new_node;

	if (!arg || !isInteger(arg))
	{
		err(1, line_number);

	}

	num = atoi(arg);
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
