#include <stdio.h>
#define TAM 5
#define COD 99999999

//repo ------> https://github.com/AgustinGomez12/trabajo-inform-tica-1-nro-3

int main(void) {
	float preciosPruductos[TAM] = {0};
	
	int codigosBarras[TAM] = {0};
	
	float menor = 9999999999 ,mayor = -1;
	
	int controlMenu = 1,codMenor = 0, codMayor = 0;
	
	for(int i = 0; i < TAM ; i++){
		do{
			printf("Ingrese el codigo de barras (1-999999999)");
			printf(" nro %d ---->",i);
			scanf("%d",&codigosBarras[i]);
			if(codigosBarras[i] > 1 && codigosBarras[i] < COD){
				controlMenu = 0;	
			}else{
				controlMenu = 1;
				printf("Error. El codigo de barras debe estar entre");
				printf(" 1 y 999999999 \n\n");
			}
			
			if(controlMenu == 0){
				do{
					printf("ingrese el precio del producto");
					printf(" nro %d ---->",i);
					scanf("%f",&preciosPruductos[i]);
					if(preciosPruductos[i] > 0){
						if(preciosPruductos[i] < menor){
						menor = preciosPruductos[i];
						codMenor = codigosBarras[i];
						}
						if(preciosPruductos[i] > mayor){
						mayor = preciosPruductos[i];
						codMayor = codigosBarras[i];
						}
						controlMenu = 0;
					}else{
					controlMenu = 1;
					printf("Error. El precio debe ser mayor que cero");
					printf("\n\n");
					}
				}while(controlMenu != 0);
			}
			
			
		}while(controlMenu != 0);
		
	}
	
	printf("Todos los codigos y precios fueron ingresados exitosamente\n\n");
	
	printf("Codigo | Precio\n");
	for(int i = 0; i < TAM; i++){
		printf("|%d| |$%.2f|\n",codigosBarras[i],preciosPruductos[i]);
	}
	
	printf("Producto mas caro:[%d] $%.2f\n",codMayor,mayor);
	printf("Producto mas barato:[%d] $%.2f\n",codMenor,menor);
	
	return 0;
}

