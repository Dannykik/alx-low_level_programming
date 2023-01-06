#include "main.h"
/**
 * _abs - Enter point
 *
 * @i: letter to being tested
 *
 * Return: Alwys 0 (Success)
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	return (0);
}
