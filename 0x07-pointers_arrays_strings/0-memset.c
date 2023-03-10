#include "main.h"
/**
 * _memset - fill a block of memory with specific value
 * @s: starting address od memory to be filled
 * @b: the defined value
 * @n: number of bytes to be changed
 *
 * Return: changed arrays with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		if (s[i] != b)
			s[i] = b;

		i++;
	}

	return (s);
}
