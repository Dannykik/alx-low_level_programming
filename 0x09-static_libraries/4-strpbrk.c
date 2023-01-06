#include "main.h"
/*
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: first string
 * @accept: second string
 * Return: Always 0 is succeed
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
