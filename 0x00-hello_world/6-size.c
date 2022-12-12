#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	double c;
	char d;
	printf("Size of int is : %lu \n", sizeof(a));
	printf("Size of float is : %lu \n", sizeof(b));
	printf("Size of double is : %lu \n", sizeof(c));
	printf("Size of char is : %lu \n", sizeof(d));
	return (0);
}
