#include "main.h"
/**
* sqrt_helper - calculates the natural square root of a number
* @n: number to calculate the square root of
* @i: integer to check if it's a square root
* Return: square root of n if found, -1 otherwise
*/
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
/**
* _sqrt_recursion - calculates the natural square root of a number
*
* @n: number to calculate the square root of
*
* Return: square root of n if found, -1 otherwise
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}
