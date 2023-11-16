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
		if (cur->n > 127 || cur->n <= 0)
		{
			printf("\n");
			return;
		}
		putchar(cur->n);
		cur = cur->next;
	}
	printf("\n");

}
