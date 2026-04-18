#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
int main (void)
{
	int n = 10, cont = 10, i = 0;
	int v[10] = {};
	double total_t;
	
	for (i = 0; i < n; i++)
	{
		v[i] = cont;
		cont--;
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
