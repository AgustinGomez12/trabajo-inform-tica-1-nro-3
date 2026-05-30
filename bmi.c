#include <stdio.h>
int main(void){
	
	int peso;
	float altura;
	
	printf("Ingrese su peso en kg: ");
	scanf("%d", &peso);
	
	printf("ingrese su altura en metros: ");
	scanf("%f", &altura);
	
	float imc = peso/(altura*altura);
	
	if(imc >= 30){
		printf("Su indice de masa corporal es: %.2f\n %.2f | Obecidad -Rangos de su categoria: >=30 \n------------\n <18.5 | bajo peso\n 18.5 a 24.9  |  Normal\n 25.0 a 29.9 | Sobrepeso \n" ,imc,imc );
	}else {
		if(imc <= 29.9 && imc >= 25.0){
			printf("Su indice de masa corporal es: %.2f\n %.2f | Sobrepeso -Rangos de su categoria: 25.0 a 29.9 \n------------\n <18.5 | bajo peso\n 18.5 a 24.9  |  Normal\n 25.0 a 29.9 | Sobrepeso \n " ,imc,imc );	
		}else {
			if(imc <= 24.9 && imc >= 18.5){
				printf("Su indice de masa corporal es : %.2f \n %.2f | Normal -Rangos de su categoria: 18.5 a 24.9 \n------------\n <18.5 | bajo peso\n 25.0 a 29.9 | Sobrepeso \n >=30 | Obecidad \n",imc,imc);
			}else{
				if(imc < 18.5){
					printf("Su indice de masa corporal es : %.2f \n %.2f | bajo peso -Rangos de su categoria: <18.5 \n------------\n 18.5 a 24.9  |  Normal\n 25.0 a 29.9 | Sobrepeso \n >=30 | Obecidad \n",imc,imc);
				}
			}
		}
	}
		
		return 0;
	}
	



