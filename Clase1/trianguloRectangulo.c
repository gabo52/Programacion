#include<stdio.h>
#include<math.h>

int main(){
	/*a2+b2=c2*/
	double catetoA,catetoB,catetoC;
	
	catetoA=1;
	catetoB=1;
	
	catetoC = sqrt(pow(catetoA,2) + pow(catetoB,2));
	/*Autocompletar texto: ctrl + space*/
	printf("El triangulo rectangulo con catetoA: %.2lf y catetoB: %.2lf tiene como hipotenusa el catetoC de valor: %.2lf",catetoA,catetoB,catetoC);
	return 0;
}
