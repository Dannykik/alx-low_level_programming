#include "main.h"
/**
 * _strncpy - a function that copies a string.
 *
 * @dest: a string to destination
 *
 * @src: second string
 *
 * @n: an integer 
 *
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
