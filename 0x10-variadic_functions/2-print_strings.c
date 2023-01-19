#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *l;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);

		l = va_arg(ap, char *);
		if (l == NULL)
			printf("(nil)");
		printf("%s", l);
	}
	printf("\n");
	va_end(ap);
}
