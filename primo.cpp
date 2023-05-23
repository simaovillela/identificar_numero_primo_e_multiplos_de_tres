/* 
Desenvolva um programa em C que leia número e mostre se ele é primo
*/
#include<stdio.h>
int main(){
	int num, cont, primo = 0; 
	printf("Informe um numero: ");
	scanf("%d", &num);
	cont = 2;
	while(cont < num){
		if(!(num % cont)){
			primo = 1;
		}
		cont = cont + 1;
	}
	if(primo){
		printf("\n%d nao eh primo", num);
	}else{
		printf("\n%d eh primo", num);
	}
}
