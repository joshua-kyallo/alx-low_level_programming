#include "main.h"
#include <stdio.h>

/**
 * _strcpy - this is the test function
 * @dest: destination for string
 * @src: source of string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
