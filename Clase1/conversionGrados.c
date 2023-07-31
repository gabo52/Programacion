#include<stdio.h>

int main(){
	
	/*
	F=(C*1.8)+32
	C=(F-32)/1.8
	K=C=273.15
	*/
	double farenh,celsius,kelvin;
	
	celsius = -37;
	
	farenh = (celsius*1.8)+32;
	kelvin = celsius + 273.15;
	
	printf("%.2lf grados celsius equivale a %.2lf grados farenheit\n",celsius,farenh);
	printf("%.2lf grados celsius equivale a %.2lf grados kelvin\n",celsius,kelvin);
	return 0;
}
