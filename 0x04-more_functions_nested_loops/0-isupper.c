#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @m: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int m)
{
	if ((m >= 'A') && (m <= 'Z'))
	{
		return (1);
	}
	return (0);
}

