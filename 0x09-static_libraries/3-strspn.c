#include "main.h"
/**
 * _strspn - funcrion root
 * @s: pointer for checking
 * @accept: pointer to add
 * Return: Always 0 is succeed
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				i++;
				break;
			}
			else if ((accept[j + 1]) == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
