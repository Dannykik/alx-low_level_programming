#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: An integer
 *
 * @argv: a pointer
 *
 * Return: Always 0 is succeed
 */
int main(int argc, char *argv[])
{
	int count;

	printf("%s \n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s \n", argv[count]);
		}
	}
	else
	{
		printf("\n");
	}
	return (0);
}
