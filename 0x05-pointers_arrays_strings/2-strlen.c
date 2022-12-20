#include "main.h"
/**
 * _strlen - check the code
 *
 * @s: string
 *
 * Return: Always 0.
 */
int _strlen(char *s) /* _strlen function */
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
