#include <stdio.h>
#include <stdlib.h>
void buscarDivisores (int numero, int vector [], int *pLibre);
void imprimirDivisores (int vector[], int pLibre);

int main()
{
	int *vector;
	int pLibre = 0;
	int numero, i;
	
	printf("Ingrese el numero que desee para saber cuales son sus divisores\n");
	scanf("%d", &numero);
	printf("A continuacion apareceran sus divisores:\n");
	
	vector = (int*) malloc (numero*sizeof(int));
	if (vector == NULL) 
	{
		printf("No hay memoria");
		return 1;
	}
	
	buscarDivisores (numero, vector, &pLibre);
	imprimirDivisores (vector, pLibre);
	
	return 0;
}

void buscarDivisores (int numero, int vector [], int *pLibre)
{
	int i;
	
	for (i = 1; i <= numero; i++)
	{
		if (numero % i == 0)
		{
			vector[*pLibre] = i;
			(*pLibre)++;
		}
	}
}

void imprimirDivisores (int vector[], int pLibre)
{
	int i;
	
	printf("%d", vector[0]);
	for (i = 1; i < pLibre; i++)
	{
		printf(", %d", vector[i]);
	}
}
