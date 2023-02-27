#include "main.h"

/**
 * print_most_numbers - Print the number since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The number since 0 up to 9
 */

void print_most_numbers(void)

{
	int c = 0;

	for (; c <= 9; c++)
	{
	if (c == 2 || c == 4)
	{
	continue;
	}
	else
	{
	_Putchar(c + '0');
	}
	}
	_Putchar('\n');
}
