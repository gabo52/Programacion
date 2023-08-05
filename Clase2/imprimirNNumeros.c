#include<stdio.h>

int main(){
	/*Queremos imprimir los n primeros numeros*/
	/*Definir variables de control y las inicializar*/
	int i=1,n;
	/*i [1,n]*/
	/*
			i		n   i<=5
	1		1       5	V
	2       1       5   V
	3       1       5   V
	4       1       5   V
	5       1       5   V
	*/
	printf("Ingrese el numero maximo para imprimir los valores menor e iguales:\n");
	scanf("%d",&n);
	
	
	while(i<=n){
		printf("%d ",i);
		/*Actualizamos la variable de control*/
		
		/*i++ e i=i+1 es exactamente lo mismo*/
		i++;
	}
	
	printf("El valor final de i es: %d\n",i);
	return 0;
}
