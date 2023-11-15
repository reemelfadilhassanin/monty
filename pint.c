#include "monty.h"

/**
 * pint - Prints the value at the top of the stack, followed by a new line.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode in the file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
stack_t *pint;
	pint = *stack;
<<<<<<< HEAD
	if (!pint || stack == NULL)
	{
=======
	if (!pint)
>>>>>>> 6b218ad6d38d6e37c19374cfb5d4fdc74eab5ae3
		err(4, line_number);
	printf("%d\n", pint->n);
}
