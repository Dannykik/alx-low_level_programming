#include "main.h"
/**
 * print_rev - The function that prints a string, in reverse
 *
 * @s: The string
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[0] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
