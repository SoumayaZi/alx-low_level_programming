#include "main.h"

/**
 * _strlen -  Returns the length of a string.
 * @str: string.
 *
 * Return: length.
 */
size_t _strlen(const char *str)
{
	size_t l = 0;

	while (*str++)
		l++;

	return (l);
}
