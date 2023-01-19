#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: separator two integer
 * @n: counting number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;

	va_start(ap, n);
	i = 0;
	for (i = 0;i < n; i = var_arg(ap, unsigned int))
	{
		if (separator != NULL)
			printf("%s", separator);
		else
			printf("%d", i);
	}
	printf("\n");
	va_end(ap);
}
