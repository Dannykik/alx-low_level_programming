#include "main.h"
/**
 * more_numbers - check the code.
 */
void more_numbers(void)
{
	int i;
	int j;
	
	j = 0;
	while (j <= 9)
	{
		i = 0;
		while (i <= 14)
		{
			_putchar(i + '0');
			i++;
		}
		j++;
	}
	_putchar('\n');
}
