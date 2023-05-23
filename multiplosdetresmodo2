/*
Desenvolva um programa em C que leia um numero e mostre se ele é primo:
*/
#include<stdio.h>
int main(){
    int primo = 1, num, cont;
    printf("Informe um numero para verifcar se eh primo: ");
    scanf("%d", &num);
    cont = 2;
    while(cont < num){
        if(!(num%cont)){
            primo = 0;
        }
        cont = cont + 1;
    }
    if(primo){
        printf("\n\t%d eh primo ", num);
    }else{
        printf("\n\t%d nao eh primo ", num);
    }
}
