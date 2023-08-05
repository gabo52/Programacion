#include<stdio.h>

int main(){
	/*Queremos imprimir los n primeros numeros*/
	/*Definir variables de control y las inicializar*/
	int i,n;
	printf("Ingrese el numero maximo para imprimir los valores menor e iguales:\n");
	scanf("%d",&n);
	/*
	For tiene 3 partes
	- Declaracion o inicializacion de variables
	- Evaluacion de condicion
	- Actualizacion de variable
	*/
	
	for(i=1;i<=n;i++){
		printf("%d ",i);
	}
	
	printf("El valor final de i es: %d\n",i);
	return 0;
}
