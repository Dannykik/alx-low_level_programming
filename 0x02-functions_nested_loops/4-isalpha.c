#include "main.h"
/**
 * _isalpha - Enter point
 *
 * @c: letter to being tested
 *
 * Return: Alwys 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
