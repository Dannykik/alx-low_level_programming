#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: None.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar("%c \n", i);
		}
	}
	_putchar('\n');
}
