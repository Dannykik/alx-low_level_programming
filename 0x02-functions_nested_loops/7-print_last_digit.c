#include "main.h"
/**
 * print_last_digit - Enter point
 *
 * @i: letter to being tested
 *
 * Return: Alwys 0 (Success)
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (i > 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
	return (0);
}
