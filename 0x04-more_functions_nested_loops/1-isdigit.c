#include "main.h"

/**
 * _isdigit - Function that checks for a digit
 * @c: parameter to be checked
 * Return: 1 on success and 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
