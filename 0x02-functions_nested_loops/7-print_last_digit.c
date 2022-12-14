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

	if (i < 0)
	{
		i = -i;
		n = i % 10;
		_putchar(n + '0');
		return (n);
	}
	else	
	{
                n = i % 10;
		_putchar(n + '0');                                                return (n);
	}
}
