#include "holberton.h"

/**
 * _strncpy - the two words
 * @dest : the pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
