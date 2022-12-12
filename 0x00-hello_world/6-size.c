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
	long int e;
	long long int f;

	printf("Size of int is : %lu \n", (unsigned long)sizeof(a));
	printf("Size of float is : %lu \n", (unsigned long)sizeof(b));
	printf("Size of double is : %lu \n", (unsigned long)sizeof(c));
	printf("Size of char is : %lu \n", (unsigned long)sizeof(d));
	printf("Size of a long int : %lu \n", (unsigned long)sizeof(e));
	printf("Size of a long long int: %lu \n", (unsigned long)sizeof(f));
	return (0);
}
