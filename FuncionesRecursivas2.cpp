#include<stdio.h>

int sumarNumeros(int n);

int main()
{
	int num;
	printf("Introducir numero: ");
	scanf("%d", &num);
	printf("Suma: %d", sumarNumeros(num));
	return 0;
}

int sumarNumeros(int n)
{
	if(n != 0)
	{
		printf("%d ", n);
		return n+sumarNumeros(n-1);
	}
	else
	{
		printf("\n");
		return n;
	}
}
