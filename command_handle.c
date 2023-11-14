#include "monty.h"

/**
 * command_handle - Function to handle command execution
 *@command: pointer to command to be execute
 * @argv: pointer to the arugument list for command
 * @index: the index of the command
 * This function use frok()to create
 * child process that run the program
 * while parent wait
 * Return: Successful execution, returns status of the command
 *execution in the parent process
 *No return in the child process
 */
int command_handle(char **command, stack_t **stack)
{
	
	int i = 0;
	instruction_t opcodes[] = {
    {"push", push},
    {NULL, NULL}
  };
  (void) stack;
	for (i = 0; i < 2; i++)
	{
		if (strcmp(opcodes[i].opcode, command[0]) == 0)
		{
			opcodes[i].f(stack, atoi(command[1]));
			return 1;
		}
	}
	printf("nooooooooooooooooooooo\n");
	return 1;
	
}
/*void main (void)
{
	int i;
	stack_t *stack = new_stack();
	char *str = "push";
	i = command_handle(&str, &stack);
	printf("-----------\n%d\n",i);
}*/
