#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * @val: square root
 * Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)

{
return (square(n, 1));
}
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (sqaure(n, val + 1));
	}
	else
	{
		return (-1);
	}
}