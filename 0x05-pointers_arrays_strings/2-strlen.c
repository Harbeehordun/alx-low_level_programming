#include <stdio.h>

/**
 *  _strlen - Returns the length of a string.
 *  @str: The string to get the length of 
 *  Return: The length of @str.
 */
size_t _strlen(const Char str)
{
	size_t length = 0;
	while (*str++)
		length++;
	return (length);
}
