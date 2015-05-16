#include <stdio.h>
#include <math.h>
int main (){

    int entrada, resultado;

    printf("Digite o numero a ser fatorado.\n");
    scanf("%d", &entrada);

    resultado = entrada * (entrada - 1);

    while(entrada > 0){

        --entrada;
        if((entrada-1) > 0){

            resultado = resultado * (entrada - 1);

        }
    }

    printf("O resultado eh %d.\n", resultado);

}
