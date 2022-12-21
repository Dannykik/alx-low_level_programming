#include "main.h"
/**
 * reverse_array - a function that reverses the content to array
 *
 * @a: first integer define as a pointer
 *
 * @n: second integer
 */
void reverse_array(int *a, int n)
{
	int i, b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
