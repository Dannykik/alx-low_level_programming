#include "main.h"
/**
 * leet - function that encodes a string into 1337
 *
 * @s:string to encode
 *
 * Return: always 0
 */
char *leet(char *s)
{
	int i, j;

	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
			}
		}
	}
	return (s);
}
