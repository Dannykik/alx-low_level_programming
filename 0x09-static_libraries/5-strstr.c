#include "main.h"
/*
 * _strstr - func
 * @haystack: pointer
 * @needle: pointer
 * Return: succed
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
