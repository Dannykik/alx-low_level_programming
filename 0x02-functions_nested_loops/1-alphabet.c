#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: None.
 */
void print_alphabet(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
