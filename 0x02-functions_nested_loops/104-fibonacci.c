#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successfull
 */

int main(void)
{
	int a = 1, b = 2, i;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		int c = a + b;

		printf("%d", c);

	        if (i != 98)
		{
			printf(", ");
		}

		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
