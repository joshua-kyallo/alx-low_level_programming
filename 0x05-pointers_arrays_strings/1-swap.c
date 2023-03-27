#include "main.h"

/*
 * swap_int - swaps two values
 * @a: value 1
 * @b: value 2
 * Return: o
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
