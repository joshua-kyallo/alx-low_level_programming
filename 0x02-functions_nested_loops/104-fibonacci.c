#include <stdio.h>

/**
 * main - this is the main fuction
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int count = 0;
	int total = 0;
	int temp;

	while (count < 	98)
	{
		printf("%d", i);
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		if (count == 97)
		{
			total += num1 + num2;
			printf("\n");
		} else
		{
			total += num1;
			printf(", ");
		}
		count++;
	}
	return (0);
}
