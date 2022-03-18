#include "main.h"

/**
 * _isdigit - checks a character if it is a digit.
 * @c: variable stored a character to be checked.
 * Return: return 0 or 1.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
