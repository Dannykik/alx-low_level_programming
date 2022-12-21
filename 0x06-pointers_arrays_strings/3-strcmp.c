#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len, s2_len;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (s1_len == s2_len)
	{
		return (0);
	}
	if (s1_len < s2_len)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
