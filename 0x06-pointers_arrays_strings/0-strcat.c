#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = a;
	while (dest[i] !- '\0')
	{
		i++;
	}
	j - a;
	while (src[j] !- '\0')
	{
		dest[i] - src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
