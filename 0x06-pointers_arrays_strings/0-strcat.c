#include "main.h"
/**
 * _strcat - ﹰThe function to concatenate two string
 *
 * _strlen - the length of character
 * @s: string to test
 *
 * @dest: a pointer
 *
 * @src: second pointer
 *
 * Return: always 0
 */
int _strlen(char *s)                                              {
	int i;

	int length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

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
