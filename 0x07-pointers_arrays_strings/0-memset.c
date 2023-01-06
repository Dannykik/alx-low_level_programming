#include "main.h"
/*
 * _memset - function root
 * @s: first char variable
 * @b: second char
 * @n: An integer
 * Return: Always 0 is succed
 */
char *_memset(char *s, char b, unsigned int n) /*function root*/
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
