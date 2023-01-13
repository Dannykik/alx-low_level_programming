#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array
 * @nmemb: An unsigned variable
 * @size: second unsigned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(nmemb) * size);

	if (i == NULL)
	{
		return (NULL);
	}
	j = 0;

	while (j < (nmemb * size))
	{
		
		i[j] = 0;
		j++;
	}
	return (i);
}
