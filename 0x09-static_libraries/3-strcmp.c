#include "main.h"
/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
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
