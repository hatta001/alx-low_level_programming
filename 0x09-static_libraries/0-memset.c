#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s: string
 * @b: a character
 * @n: an integer
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n);
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}
