#include "main.h"
/*
 * _memset - Our function
 * @s: first char variable
 * @b: second char
 * @n: An integer
 * Return: Always 0 is succed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
