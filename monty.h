#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define del " \t\n"

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, int value);
} instruction_t;



/*Functions*/
char **toknizer(char *line);
int command_handle(char **command, stack_t **stack);
void push(stack_t **stack, int value);
stack_t *new_stack (void);

/*Strings*/
int _strcmp(char *c1, char *c2);
int _strlen(char *c);
char *_strcat(char *x1, char *x2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);

#endif
