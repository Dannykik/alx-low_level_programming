#include "main.h"
/**
 * swap_int - print 98
 *
 * @a: a pointer
 *
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int d;

	d = 0;
	d = *a;
	*a = *b;
	*b = d;
}
