#include "main.h"

/**
 * _pow_recursion - a function that returns the value of power.
 * @x: input 1
 * @y: input 2
 * Return: -1 if y is lower thatn 0, else retrun reasult
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
