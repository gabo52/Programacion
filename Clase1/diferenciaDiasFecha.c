#include<stdio.h>
#include<math.h>

int main(){
	int dd1,mm1,aa1,dd2,mm2,aa2;
	int diferenciaDias,dias1,dias2;
	

	
	dd1=21;mm1=03;aa1=2003;
	dd2=26;mm2=06;aa2=2004;
	
	dias1=dd1+mm1*31+aa1*365;
	dias2=dd2+mm2*31+aa2*365;
	/*La funcion abs halla el valor absoluto y es parte de la libreria math.h*/
	diferenciaDias=abs(dias1-dias2);
	
	printf("La diferencia de dias es: %d dias\n",diferenciaDias);
	return 0;
}
