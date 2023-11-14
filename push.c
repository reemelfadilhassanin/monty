#include "monty.h"

void push (stack_t **stack, int value)
{

stack_t *new_node;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
	printf("\nmallllllllllllloc\n");
	return;
}
new_node->n = value;
new_node->prev = (*stack)->prev;
  new_node->next = (*stack);
  (*stack)->prev = new_node;
}
