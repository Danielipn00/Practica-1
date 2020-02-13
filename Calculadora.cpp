#include<stdio.h>
#include<stdlib.h>
int main(){
	int opc=0;
    float a=0,b=0,c=0;
    while(c==0){
	printf("\n 1- Suma");
	printf("\n 2- Resta");
	printf("\n 3- Multiplicaciòn");
	printf("\n 4- Divisiòn");
	printf("\n Seleccione una opciòn: ");
	scanf("%d",&opc);
	printf("Ingrese el valor de a: ");
	scanf("%f",&a);
	printf("Ingrese el valor de b: ");
	scanf("%f",&b);
	
	if(opc==1){
		c=a+b;
	}
	else if(opc==2){
		c=a-b;
	}
	else if(opc==3){
		c=a*b;
	}
	else if(opc==4){
		while(b==0){
		printf("Ingrese un valor vàlido para b:");
		scanf("%f",&b);
		}
		c=a/b;
	}
	else{
		system("cls");
		printf("Elija una opcion valida: ");
		c=0;
	}
	}
	printf("El resultado de la operacion es: %f",c);
}
