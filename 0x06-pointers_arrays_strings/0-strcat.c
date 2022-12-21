#include "main.h"
/**
 * _strcat - ﹰThe function to concatenate two string
 *
 * @dest: a pointer
 *
 * @src: second pointer
 *
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++;
	}
	while (src[j] != '\0')
	{
		_putchar(src[j]);
		j++;
	}
	return (dest);
}
