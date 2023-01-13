#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using 
 *
 * @nmemb: first integer
 *
 * @size: second integer
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);

	if (s == NULL)
	{
		return (NULL);
	}
	c = 0;

	while (c < (nmemb * size))
	{
		s[c] = 0;
		c++;
	}
	return (s);
}
