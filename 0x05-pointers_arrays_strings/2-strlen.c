#include "main.h"
/**
 * _strlen - a function to get the length of a string
 *
 * @s: a string value
 *
 * return: always O
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
