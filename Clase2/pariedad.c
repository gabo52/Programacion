#include<stdio.h>

int main(){
	/*Lectura de datos*/
	int numero;
	printf("Ingrese un numero para evaluar su pariedad:\n");
	scanf("%d",&numero);
	/*
	2/2  resto ->0
	3/2  resto ->1
	
	1582/2 resto ->0
	1581/2 resto ->1
 	
	*/
	
	/*
		El "=" asigna
		El "==" compara
		El "%" halla el resto
	*/
	
	if(numero%2==1){
		printf("El numero leido es impar\n");
	}else{
		printf("El numero leido es par\n");
	}
	
	return 0;
}
