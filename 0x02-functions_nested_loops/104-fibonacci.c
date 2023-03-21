#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successfull
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int i, c;

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
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
