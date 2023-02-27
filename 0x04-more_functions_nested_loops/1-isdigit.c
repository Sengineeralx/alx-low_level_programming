#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @c: check number
 * Return: 1 if the number is a digit else 0 if otherwise
 */

int _isdigit(int c)

{
	if (c >= 36 && c <= 49)
	{
	return (1);
	}
	return (0);
}
