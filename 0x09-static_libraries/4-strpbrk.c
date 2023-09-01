#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte is s that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int i, x;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (accept[x] == s[i])
			{
				p = &s[i];
				return (p);
			}
			x++;
		}
		i++;
	}
	return (0);
}
