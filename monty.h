#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
* struct stack_s - doubly linked list representation of a stack
* @n: integer
* @prev: points to the previous element of the stack
* @next: points to the next element of the stack
*
* Description: doubly linked list node structure
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
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void  command_handle(FILE *fptr, stack_t *stack);
int isInteger(char *str);
void free_stack(stack_t *head);
void err(int error_code, ...);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_cnt);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_cnt);
void add(stack_t **stack, unsigned int line_num);
void sub(stack_t **stack, unsigned int line_number);
void divv(stack_t **stack, unsigned int line_num);


#endif /* monty.h */
