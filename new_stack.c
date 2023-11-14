#include "monty.h"
stack_t *new_stack (void)
{
	stack_t *stack;

	stack = malloc(sizeof(stack_t));
	stack->next = NULL;
	stack->prev = NULL;
	return(stack);
}
