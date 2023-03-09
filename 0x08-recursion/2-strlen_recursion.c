#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: Pointer to the string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		return (0); /* Length is zero */
	}

	/* Recursive case: add 1 to length and move to next character */
	return (1 + _strlen_recursion(s + 1));
}
