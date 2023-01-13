#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: first integer
 * @max: second integer
 * Return: Always succeed
 */
int *array_range(int min, int max)
{
	int *i;
	int j;

	if (min > max)
		return (NULL);
	i = malloc(sizeof(i) * (max - min + 1));

	if (i == NULL)
		return (NULL);
	j = 0;
	while (min <= max)
	{
		i[j] = min;
		min++;
		j++;
	}
	return (i);
}
