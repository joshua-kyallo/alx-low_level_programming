#include "main.h"
#include <string.h>

/**
 * puts2 - test function
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}