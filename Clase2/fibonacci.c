#include<stdio.h>

int main(){
	int fibonacci=0,num,i;
	/* n=n-1+n-2
	0,    1,     1,   2,   3,    5, 8, 13, 21
	
	f(0) f(1)  f(2) f(3) f(4)   f(5)
	*/
	
	
	while(1){
		printf("Ingrese un numero para encontrar su numero Fibonnaci:\n");
		scanf("%d",&num);
	
		if(num>=-1){
			if(num<=1){
				
				if(num==-1)break;

				if(num==1)fibonacci=1;
				else fibonacci=0;
				
			}else{
				
				int ant1,ant2;
				ant1=1;
				ant2=0;
				
				for(i=2;i<=num;i++){
					fibonacci=ant1+ant2;
					
					ant2=ant1;
					ant1=fibonacci;
				}
			}
			printf("El valor de fibonacci es: %d\n",fibonacci);
		}else{
			printf("El numero ingresado debe ser mayor igual a -1\n");
		}
		printf("\n");
	}
	
	printf("Final de la iteracion de numeros fibonacci\n");
	
	return 0;
}
