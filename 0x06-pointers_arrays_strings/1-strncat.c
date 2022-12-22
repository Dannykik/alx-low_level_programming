#include "main.h"
/**
 * _strlen - Function to calculate length of string
 *
 * @s: String to calculate
 *
 * Return: always 0 is succeed.
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: control bytes fro
 *
 * Return: always 0 is succeed.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
