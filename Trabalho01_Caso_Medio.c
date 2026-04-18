#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
int main (void)
{
	srand(time(NULL));
	int n = 200000, cont = 0, i = 0, aleatorio = 0;
	int v[200000] = {};
	double total_t;
	
	for (i = 0; i < n; i++)
	{
		aleatorio = rand() % 200000 + 0;
		v[i] = aleatorio;
		printf ("%d ", v[i]);
	}
	
	clock_t start_t, end_t;
	
	bool troquei = true;
	
	start_t = clock();
	while (troquei)
	{
		troquei = false;
		
		for (i = 0; i < n; i++)
		{
			if (v[i] > v[i + 1])
			{
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				troquei = true;
			}
		}
	}
	end_t = clock();
	
	cont = 0;
	printf ("\n");
	while (cont < n)
	{
		printf ("%d ", v[cont]);
		cont++;
	}
	
	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("\nTempo total consumido pela CPU: %f", total_t);
	
}
