#include "main.h"

/**
 * _strlen_recursion - a finction that return the length of a string
 * @s: string pointer
 * Return: int
*/

int _strlen_recursion(char *s)
{
	i = 0;

	if (*s > '\0')
	{
		i +=  _strlen_recursion(s + 1) + 1;
	}
	return (i);

}
