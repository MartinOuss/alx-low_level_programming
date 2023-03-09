#include"main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *end = s;

	if (*s == '\0')
		return (1);

	while (*(end + 1) != '\0')
		end++;

	if (*s != *end)
		return (0);
	{
		*end = '\0';
		int result = is_palindrome(s + 1);
		*end = s[strlen(s)] == '\0' ? *end : s[strlen(s)];
		return (result);
	}
}
