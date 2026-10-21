#include <stdio.h>
#include <stdlib.h>
#define TAM 20

//Link repo ---> https://github.com/AgustinGomez12/trabajo-inform-tica-1-nro-3

int cuantas_piezas(int);
int rectificable(float, float);
int rechazada(float, float);


void cargar_piezas(float *p, int n);
int contar(int (*)(float, float), float, float *, int);
float* reserva_memoria(int);
void segregar(int (*)(float, float), float, float *, int, float *);
void mostrar_piezas(char *, float *, int);


int main (void) {
	float diametros[TAM] = {0};
	int n;
	float max = 12;
	float min = 10;
	
	n = cuantas_piezas(TAM);
	cargar_piezas(diametros,n);
	
	int n_rectificar = contar(rectificable, max, diametros, n);
	float *p_rectificables = reserva_memoria(n_rectificar);
	segregar(rectificable,max,diametros,n,p_rectificables);

	int n_rechazar = contar(rechazada, min, diametros, n);
	float *p_rechazadas = reserva_memoria(n_rechazar);
	segregar(rechazada,min,diametros,n,p_rechazadas);
	printf("\n -------------- \n");
	mostrar_piezas("Rectificables",p_rectificables,n_rectificar);
	mostrar_piezas("rechazada",p_rechazadas,n_rechazar);
	
	free(p_rechazadas);
	free(p_rectificables);
	return 0;
}

int cuantas_piezas(int max){
	int k = 6;
	do{
		if(k == 6){
		printf("Instrucciones de almacenamiento:\n");
		printf("1-La capacidad maxima es 20\n");
		printf("2-El numero Ingresado debe ser mayor que 0\n");
		printf("3-El numero ingresado no puede ser 0\n");
		k = 1;
		printf("\n ---------------- \n");
		}
		
		if(max < 0){
			printf("Error de dominio la cantidad debe ser mayor que 0\n\n");
			
		}
		
		if(max == 0 && k == 2){
			printf("Error la cantida de elementos no puede ");
			printf("permacer en 0 para operar\n\n");
		}
		
		if(k == 5){
			printf("Error la maxima capacidad de almacenamiento es 20\n\n");
		}
		if(max < 0 || (max == 0 && k == 2) || k == 5)
		   printf("Ingrese nuevamente la cantidad ---> ");
		
		
		if(k == 1){
		   printf("Ingrese la catidad de elementos que desea guardar ---> ");
		}
		   scanf("%d",&max);
		
		
		if(max == 0)
			k = 2;
		
		if(max < 0)
			k = 3;
		
		if(max > 0)
			k = 1;
		if(max > 20)
			k = 5;
	}while(max < 0 || max == 0 || max > 20 );
	return max;
}

void cargar_piezas(float *p, int n){
int k = 3;	
for(int i = 0; i < n; i++){
       do{
		if(k == 3){
			printf("\n");
			printf("Instrucciones de ingreso de piezas:\n");
			printf("1-No ingresar numeros menores que 0.\n");
			printf("2-No ingresar 0.\n");
			printf("\n--------------\n");
			k = 0; 
		}   
		   
		if(k == 1)   
		printf("Ingrese nuevamente el diametro de la pieza nro = %d --->",i);
		   
		if(k == 0)   
		printf("Ingrese el diametro de la pieza nro = %d --->",i);
		scanf("%f",p);
		if(*p <= 0)
		k = 1;
		else
		k = 0;	
	   }while(*p <= 0);
		p += 1;
	}
}
int contar(int (*criterio)(float, float), float valor, float *p, int n){
	int valorFinal = 0;
	for(int i = 0; i < n; i++){
		int resultCriterio = criterio(*p,valor);
		p++;
		if(resultCriterio == 1){
			valorFinal++;
		}
	}
	return(valorFinal);	
}
	
int rectificable(float diametro, float valor) {
		if (diametro > valor)
			return 1;
		else
			return 0;
}


int rechazada(float diametro, float valor) {
		if (diametro < valor)
			return 1;
		else
			return 0;
}
float *reserva_memoria(int n){
   if(n < 0){
	   return 0;
   }
  
   float *result = malloc(n * sizeof(float));
   
   if(result == NULL){
	   printf("Error \n");
	   printf("La reserva de memoria no se pudo llevar a cabo\n");
	   return NULL;
   }
   return result;
}
void segregar(int (*c)(float, float), float valor, float *p, int n, float *q){
	for(int i = 0;i < n; i++){
		int result = c(*p,valor);
		if(result == 1){
			*q = *p;
			q += 1;
		}
		p += 1;
	}
	
}
void mostrar_piezas(char *mensaje, float *p, int n){
	printf("piezas %s: \n",mensaje);
	for(int i = 0; i < n; i++){
	printf("Diametro: %.2f\n",*(p + i));
	}
   printf("\n");
}

