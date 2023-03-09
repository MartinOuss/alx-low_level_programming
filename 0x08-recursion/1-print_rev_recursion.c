#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
{return; /* Exit function */}
_print_rev_recursion(s + 1); /* Recursively call function with next char */
_putchar(*s); /* Print current character */
}
