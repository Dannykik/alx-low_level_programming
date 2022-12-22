#include "main.h"
/**
 * string_toupper - Function that change lowercase to uppercase
 *
 * @s: string yo change
 *
 * Return: Alwayse 0.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	s[i] = '\0';
	return (s);
}
