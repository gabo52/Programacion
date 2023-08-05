#include<stdio.h>

int main(){
	/*Inicializar variable de control*/
	int i,suma=0,n;
	
	printf("Ingrese el numero maximo para hallar la suma hasta dicho numero:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		/*suma+=i es lo mismo*/
		suma=suma+i;
	}
	
	printf("La sumatoria desde 1 a %d es: %d\n",n,suma);
	
	printf("El tamaño de un int en este programa es: %d",sizeof(int));
	
	/*2^32 -1 -> valor maximo */
	
	return 0;
}
