// Desenvolva um programa que leia os 10 pr�ximos multiplos de 3 de um n�mero informado:
// ex: 100, 102, 105, 108...

#include<stdio.h>
int main(){
	int numero, contador, multiplo;
	multiplo = 3;
	contador = 0;
	printf("Informe um numero: ");
	scanf("%d", &numero);
	do{
		if(numero % 3 == 0){
		printf("%d, ", numero);
		contador = contador + 1;	
	}
	numero = numero + 1;
			
	}while (numero > 0);
	
}
