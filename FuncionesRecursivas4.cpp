#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quicksort(int lista[], int primero, int ultimo);
int main()
{
	int n, i;
	srand(time(NULL));
	printf("Numero de elementos a ordenar:\n");
	scanf("%d", &n);
	int lista[n];
	
	for(i=0;i<n;i++){
		lista[i]=rand()%(100)+1;
	}
		printf("Lista sin ordenar\n");
		for(i=0;i<n;i++)
			printf(" %d ", lista[i]);
		printf("\n");
		
		quicksort(lista,0,n-1);
		
		printf("Lista ordenada\n");
		for(i=0;i<n;i++){
			printf(" %d ", lista[i]);
		}
return 0;
}

void quicksort(int lista[], int primero, int ultimo)
{
	int pivot, i, j, temp;
	if(primero<ultimo){
		pivot=primero;
		i=primero;
		j=ultimo;
		while (i<j){
			while (lista[i]<=lista[pivot] && i<=ultimo){i++;}
			while (lista[j]>lista[pivot] && j>=ultimo){j--;}
			if(i<j){
				temp=lista[i];
				lista[i]=lista[j];
				lista[j]=temp;
			}
		}
		temp=lista[j];
		lista[j]=lista[pivot];
		lista[pivot]=temp;
		quicksort(lista, primero, j-1);
		quicksort(lista, j+1, ultimo);
	}
}
