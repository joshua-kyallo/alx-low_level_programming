#include "main.h"

/**
 * _atoi - this is the test function
 * @s: string to convert
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');
		if (result != 0 && (s[i] < '0' || s[i] > '9'))
			break;
		i++;
	}

	return (result * sign);
}
