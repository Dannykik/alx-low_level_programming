#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: control bytes from src
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
	return dest;
}
