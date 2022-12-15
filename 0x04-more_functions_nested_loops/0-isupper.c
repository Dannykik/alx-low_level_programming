#include "main.h"
/**
 * _isupper - check the code.
 *
 * @c: variable to tested
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
