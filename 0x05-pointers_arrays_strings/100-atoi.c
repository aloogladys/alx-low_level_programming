#include  "main.h"

/**
 * _atoi - converts a string to an int
 * @s: the string to be changed
 *
 * Return: the converted int
 */
int _atoi(cahr *s)
{
	int sign = 1;

	insigned int num = 0i;

	do {
		if (*s == '-')
			sign * = -1;
		else if (*s >= '0' && *s <= '9')

			num = num * 10 + (*s - '0');
		else if (num > 0)

			break;

	}
	while (*s++);
	return (num * sign);

}
