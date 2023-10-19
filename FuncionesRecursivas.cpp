//REDUCIR EL PROGRAMA A OPERACIONES Y CONDICIONES (SIN CICLOS)
#include<stdio.h>
int factorial(int num)
	{
		if(num==0)
			return 1;
		else//CUANDO NUM NO ES IGUAL A 0(num==0) VUELVE A SACAR EL FACTORIAL DE NUM PERO RESTÁNDOLE 1 MULTIPLICÁNDOSE POR EL MISMO NUM HASTA DARNPOS 0
			return(factorial(num-1)*num);
	}
	
int main()
{
	int numero;
	printf("Ingresa un numero para calcular su factorial: ");
	scanf("%d", &numero);
	printf("\n");
	printf("El factorial de %d es %d\n", numero, factorial(numero));
	return 0;
}

/*
OBTENER EL FACTORIAL DE UN NUMERO:

n!=n(n-1)(n-2)...3*2*1

6!=6(6-1)(6-2)(6-3)(6-4)(6-5)

6!=6*5*4*3*2*1
*/
