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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
	return (0);
}
