#include "main.h"
/**
 * _memcpy - The function that copies memory area
 * @dest: The pointer variable
 * @src: The second pointer
 * @n: The integer that control a byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
