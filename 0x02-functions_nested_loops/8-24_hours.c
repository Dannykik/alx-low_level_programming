#include "main.h"
/**
 * jack_bauer - Entry point
 */
void jack_bauer(void)
{
	int i;
	int a = 0, b = 0, c = 0, d = 0;

	for (i = 0; i < 1440; i++)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');
		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 3)
		{
			b = 0;
			a++;
		}
	}
}
