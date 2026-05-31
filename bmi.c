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
    //Los espacios son parte estetica de la vista final de la tabla.
	printf("Su indiece de masa corporal es de: %.2f \n     Indice | Condicion \n     ------------------ \n      <18.5 | Bajo peso \n18.5 a 24.9 | Normal \n25.0 a 29.9 | Sobrepeso \n       >=30 | Obesidad\n",imc);
	
		return 0;
	}
	
	



