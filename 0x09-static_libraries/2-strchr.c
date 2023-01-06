#include "main.h"
/**
 * _strchr - The function that locate a character in a string
 * @s: We define a pointer
 * @c: A character is defined
 * Return: Always 0 is succed
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (0);
		}
	}
}
