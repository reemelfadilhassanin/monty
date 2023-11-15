#include "monty.h"

#include <stdarg.h>

/**
 * err - handles error messages based on error code
 * @error_code: error code
 * @line_number: line number in the file
 * @...: additional arguments for variable message
 */
void err(int error_code, ...) {
    int idx;
    char *opcode;
    va_list arg;
    va_start(arg, error_code);
   

    switch (error_code) {
    case 1:
        fprintf(stderr, "L%d: usage: push integer\n", va_arg(arg, int));
        break;
    case 2:
    idx = va_arg(arg, int);
    opcode = va_arg(arg, char *);
        fprintf(stderr, "L%d: unknown instruction %s\n", idx, opcode);
        break;
    case 3:
    
        fprintf(stderr, "Error: Can't open file %s\n", va_arg(arg, char *));
        break;
        case 4:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(arg, int));
			break;
            case 5:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(arg, int));
			break;
            case 6:
			idx = va_arg(arg, unsigned int);
			opcode = va_arg(arg, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", idx, opcode);
			break;
   
    default:
        fprintf(stderr, "L%d: unspecified error\n", va_arg(arg, int));
        break;
    }

    va_end(arg);

    exit(EXIT_FAILURE);
}
