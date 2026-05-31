#include <stdio.h>
int main(void){
    //LINK A GITHUB => https://github.com/AgustinGomez12/trabajo-inform-tica-1-nro-3/blob/main/bmi.c
	int peso;
	float altura;
	
	printf("Ingrese su peso en kg:");
	scanf("%d",&peso);
	
	printf("ingrese se altura en metros:");
	scanf("%f",&altura);
	
	float imc = peso / (altura * altura);
	//
	printf("Su indiece de masa corporal es de: %.2f \n",imc);
	printf("    indice | Condicion\n---------------------------------\n");
	printf("      <18.5|bajo peso\n");
	printf("18.5 a 24.9|Normal\n");
	printf("25.0 a 29.9|Sobrepeso\n");
	printf("       >=30|Obesidad\n");
	
	return 0;
}
	
	
	
	

