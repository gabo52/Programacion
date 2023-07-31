#include<stdio.h>

int main(){
	int dd1,mm1,aa1,dd2,mm2,aa2;
	int diferenciaDias;
	//printf("El valor que se encuentra guardado en diferenciaDias es: %d",diferenciaDias);
	/*
	dia = 21
	mes = 03
	año = 2003
	fecha1 = 20030321
	fecha2 = 20040526
		[00000011 00000011 00011111 11111111]
	*/
	

	
	dd1=21;mm1=03;aa1=2003;
	dd2=26;mm2=06;aa2=2004;
	
	if(aa2>aa1){				
		diferenciaDias= diferenciaDias + (aa2-aa1)*365;
	}
	
	/*
		Una proposicion verdadera es un 1
		Una proposicion falsa da 2
		Cualquier numero distinto a 0, es tomado como verdadero
	*/
	if(4){
		printf("Entre a la selectiva \n");
	}else{
		printf("No entre a la selectiva\n");
	}
	
	
	if(mm2>mm1){
		diferenciaDias = diferenciaDias + (mm2-mm1)*31;
	}
	
	if(dd2>dd1){
		diferenciaDias = diferenciaDias + dd2-dd1;
	}
	
	printf("La diferencia de dias es: %d",diferenciaDias);
	
	
	return 0;
}
