#include "main.h"
/**
 * _puts - string followed by a new line
 *
 * @str: the string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i] + '0');
		i++;
	}
	_putchar('\n');
}
