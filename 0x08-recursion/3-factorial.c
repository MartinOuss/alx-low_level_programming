#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n. If n is less than 0, return -1.
 */
int factorial(int n)
{
	/* Base case: factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}
	/* Negative numbers don't have factorials */
	else if (n < 0)
	{
		return (-1);
	}
	/* Recursive case: multiply by n and move towards 0 */
	else
	{
		return (n * factorial(n - 1));
	}
}
