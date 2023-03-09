#include "main.h"
#include <string.h>
/**
* _is_palindrome - recursive helper function for is_palindrome
* @s: string to check
* @start: starting index of the string
* @end: ending index of the string
*
* Return: 1 if string is a palindrome, 0 otherwise
*/
int _is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_is_palindrome(s, start + 1, end - 1));
}
/**
* is_palindrome - checks if a string is a palindrome
* @s: string to check
*
* Return: 1 if string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len = strlen(s);
		return (_is_palindrome(s, 0, len - 1));
}
