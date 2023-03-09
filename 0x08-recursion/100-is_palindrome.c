#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len = strlen(s);
	char *start = s;
	char *end = s + len - 1;

	while (start < end)
	{
		if (*start != *end)
			return (0);
		start++;
		end--;
	}
	return (1);
}
