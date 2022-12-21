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

	j = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{	
		dest[j + i] = src[i];
	}
	dest[j+i] = '\0';
	return (dest);
}
