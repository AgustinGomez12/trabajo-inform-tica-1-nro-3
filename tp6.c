#include <stdio.h>
#define PI 3.14159265358979323846
//Prototipos Rectangulo
float calcularAreaRectangulo(float,float);
float calcularPerimetroRectangulo(float,float);
//Prototipos Rectangulo

//Prototipos Circulo.
float calcularAreaCirculo(float);
float calcularPerimetroCirculo(float);
//Prototipos Circulo.

//Prototipo de imprecion.
void imprimirResultados(float,int);
//Prototipo de imprecion.
int main(void){
	
	printf("Con que figura desea trabajar \n");
	char validacionFigura = '0';
	int controlMenu = 0;
	float a = 0,b = 0,calculoA = 0,calculoB = 0;
	do{ 
	if(controlMenu == 0){	
	printf("Respetar la Mayuscula! \n\n");
	printf("|Rectangulo|---> itroduzca (A) \n");
	printf("--------------\n");
	printf("|Circulo|---> Introduzca (B)\n");
	printf("introduzca el dato -----> ");
	scanf("%c",&validacionFigura);
	controlMenu++;
	}else if(validacionFigura != 'A' && validacionFigura != 'B'){
		printf("Erro de de lectura, introduzca correctamente el dato \n");
		printf("-------------------\n");
		printf("introduzca el dato -----> ");
		scanf(" %c",&validacionFigura);
	}
	}while(validacionFigura != 'A' && validacionFigura != 'B');
	
	switch(validacionFigura){
	case 'A':
		printf("\n");
		printf("Usted a elgido Rectangulo \n");
		printf("Ingrese la longitud del rectangulo -----> ");
		scanf("%f",&b);
		printf("Ingrese la altura del rectangulo ------> ");
		scanf("%f",&a);
		controlMenu = 2;
		calculoA = calcularAreaRectangulo(b,a);
		imprimirResultados(calculoA,controlMenu);
		
		controlMenu = 3;
		calculoB = calcularPerimetroRectangulo(b,a);
		imprimirResultados(calculoB,controlMenu);
		break;
		
	case 'B':
		controlMenu = 4;
		printf("\n");
		printf("Usted a elgido circulo \n");
		printf("Ingrese el radio del circulo -----> ");
		scanf("%f",&b);
		calculoA = calcularAreaCirculo(b);
		imprimirResultados(calculoA,controlMenu);
		
		controlMenu = 5;
		calculoB = calcularPerimetroCirculo(b);
		imprimirResultados(calculoB,controlMenu);
		break;
		}
	
	
	return 0;
	
	}
	
	
	float calcularAreaRectangulo(float b,float a){
		return a*b;
	}
	float calcularPerimetroRectangulo(float b,float a){
		return 2 * (a + b);
	}	
	
	float calcularAreaCirculo(float ra){
		return PI * (ra*ra);
	}
	
	float calcularPerimetroCirculo(float b){
		return 2*PI*b;
	}
		
	void imprimirResultados(float r,int controlMenu){
		switch(controlMenu){
		case 2:
			printf("El area del rectangulo es = %.2f\n",r);
		break;
		case 3:
			printf("El perimetro del rectangulo es = %.2f\n",r);
		break;
		case 4:
			printf("El area del circulo es = %.2f\n",r);
		break;
		case 5:
			printf("El perimetro del circulo es = %.2f\n",r);
		break;
		}
		
	}
