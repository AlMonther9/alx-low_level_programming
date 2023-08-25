#include "main.h"

/**
 * string_toupper - changes all lowercase integers of a string to upper
 *
 * @src: string to return.
 * Return: string
*/

char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);

}
