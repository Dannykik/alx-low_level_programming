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
	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
