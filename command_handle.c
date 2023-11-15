#include "monty.h"
/**
 * command_handle - function to parse each line of the file
 * @fptr: pointer point to ile
 * @stack: pointer point to head of the stack
 *
 * Return: nothing
 */
void command_handle(FILE *fptr, stack_t *stack)
{
      int i, flag;
      size_t len = 0;
      char *buffer = NULL;
      unsigned int line_num = 0;
      char *opcode;


      instruction_t opcodes[] = {
        {"push", push},
        {"pall", pall},
        {"pint", pint},
        {"pop", pop},
        {"swap", swap},
        {"nop", nop},
        {"add", add},
         {"sub", sub},
        {NULL, NULL}};

    for (line_num = 1; getline(&buffer, &len, fptr) != -1; line_num++)
    {
        opcode = strtok(buffer, " \n\t");
        if (*opcode == '#')
		return;
        if (opcode)
        {
            flag = 0;
            for (i = 0; opcodes[i].opcode; i++)
            {
                if (strcmp(opcode, opcodes[i].opcode) == 0)
                {
                    opcodes[i].f(&stack, line_num);
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                err(2, line_num, opcode);
        }
    }
    free_stack(stack);
    free(buffer);
}
