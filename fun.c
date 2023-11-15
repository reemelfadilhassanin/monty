#include "monty.h"
/**
 * isInteger - Checks if a string is a integer
 * @str: String to be check
 * Return: 1 if the string is a valid integer, 0 when faild
 */
int isInteger(char *str)
{
    if (str == NULL)
    {
        return 0;
    }
        while (*str != '\0') {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }

    return 1;
}
