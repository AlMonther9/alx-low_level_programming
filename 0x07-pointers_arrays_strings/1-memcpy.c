#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @n: bytes of memory
 * @src: memory area
 * @dest: mremory area
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);

}
