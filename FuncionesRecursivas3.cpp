#include<stdio.h>

int elevarPotencia(int n1, int n2);

int main()
{
	int num, potencia, result;
	printf("Numero: ");
	scanf("%d", &num);
	result = elevarPotencia(num, potencia);
	printf("%d^%d = %d", num, potencia, result);
	return 0;
}

int elevarPotencia(int num, int potencia)
{
	if(potencia != 0)
		return (num*elevarPotencia(num,potencia-1));
	else
	return 1;
}
