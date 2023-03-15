#include <stdio.h>

int main(){
	float radio=0, longitud=0, pi=3.14;
	int op;
	
	printf("Ingrese el radio de la circunferencia: ");
	scanf("%f",&radio);
	longitud = 2 * radio * pi;
	printf("2 * %f * %f",radio,pi);
	printf("\nLongitudad de la circunferencia = %f",longitud);
	printf("\nDesea ingresar otro radio?\n1. Si\n0.Salir");
	scanf("%d",&op);
	while(op==1){
		printf("Ingrese el radio de la circunferencia: ");
		scanf("%f",&radio);
		longitud = 2 * radio * pi;
		printf("2 * %f * %f",radio,pi);
		printf("\nLongitudad de la circunferencia = %f",longitud);
		printf("\nDesea ingresar otro radio?\n1. Si\n0.Salir");
		scanf("%d",&op);
	}
}
