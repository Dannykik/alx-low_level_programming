#include <stdio.h>

int main()
{
	int i;

	for (i = 0; i < 25; i++)
	{
		if (i % 10)
		{
			printf("Avec modulo %d et le modulo de %d avec 10 est %d \n", i, i, i%10);
		}
		else
			printf("valeur sans modulo %d d'ou on a %d \n", i, i/10);
	}
	return (i % 10);
}
