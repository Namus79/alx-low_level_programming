#include "main.h"

/**
 *_isupper - checks if a character is uppercase
 *@c: variable stores a character to be checked
 *Return: return 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
