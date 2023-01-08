#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: Argument contain
 *
 * @argv: Argument vector
 *
 * Return: Alwas 0 is succeed
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc > 1)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d \n", product);
		return (product);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
}
