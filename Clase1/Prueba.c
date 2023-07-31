#include<stdio.h>


int main(){
	/*Declaracion de variables*/
	int a,b;
	/*Proceso de variables*/
	a = 4;
	b = 3;
	/*Impresion*/
	printf("Hola mundo\n");
	printf("La variable a tiene el valor de: %d\n",a);
	printf("La variable b tiene el valor de: %d\n",b);
	
	int suma,resta,mul;
	double div;
	/*
	Si operamos 2 int -> int
	Si operamos 2 double -> double
	Si operamos un int y un double-> double
	*/
	suma = a + b;
	resta = a-b;
	mul = a*b;
	/*Si dividimos el divisor debe ser distinto a 0*/
	div = ((double)a)/b;
	
	printf("La suma de a y b es = %d\n",suma);
	printf("La resta de a y b es = %d\n",resta);
	printf("La multiplicacion de a y b es = %d\n",mul);
	printf("La division de a y b es = %lf\n",div);
	
	return 0;
}
