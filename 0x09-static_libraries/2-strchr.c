#include "main.h"
#include <stddef.h>

/**
 * _strchr - test function that locates a character in a string
 * @s: input
 * @c: input
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
