#include "monty.h"
/**
* pstr - division function
* @stack: pointer to the stack
* @line_num: line number for perr
*/
void pstr(stack_t **stack, unsigned int line_num)
{

	stack_t *cur = (*stack);

	(void) line_num;
	if (!stack || !(*stack))
	{
		printf("\n");
		return;
	}
	while (cur)
	{
		if ((*stack)->n > 127 || (*stack)->n <= 0)
			break;
		putchar(cur->n);
		cur = cur->next;
	}
	printf("\n");

}
