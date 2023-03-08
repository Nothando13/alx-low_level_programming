#include "main.h"

/**
 * _strlen_recursion - find the lengt of a string.
 * @s: string to be searched.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
