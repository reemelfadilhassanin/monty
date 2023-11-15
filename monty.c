#include "monty.h"

/**
 * main - entry point
 * @argc: arguments count
 * @argv: list of arguments passed
 *
 * Return: no return
 */
int main(int argc, char *argv[])
{
    
    stack_t *stack = NULL;
       FILE *fptr = fopen(argv[1], "r");
    
    
        if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    if (fptr == NULL || argv[1] == NULL)
    {
            err(3, argv[1]);
        
    }
   command_handle(fptr, stack);
 
    fclose(fptr);
    return 0;
}
