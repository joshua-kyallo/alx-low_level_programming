#include <stdio.h>


/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int a = 1;
	int b = 1;
	int c, i;

	printf("%d, %d, ", a, b);
	
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	return (0);
}
