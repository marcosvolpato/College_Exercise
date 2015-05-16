/*
* Written by Marcos Volpato <volpatomv@gmail.com>
* Description: receive two numbers, type double
* and one operator to calculate the results wanted
* showing it to the user
*/
#include <stdio.h>
#include <string.h>

int main(){
    //declare the variables
    int continua = 1;
    char op;
    double num1, num2, resultado;
    int vet[10][10];


    //run the calculator
    while(continua > 0){
        printf("\n>>Calcular<<");

        //ask the user for the needed info to calculate
        printf("\nDigite o primeiro numero da operacao: ");
        scanf("%lf", &num1);
        printf("\nDigite o segundo numero da operacao: ");
        scanf("%lf", &num2);
        printf("\nDigite qual operacao deseja(+,-,* ou /): ");
        fflush(stdin);
        scanf("%c", &op);

        //verify whish operator will be used
        if(op == '+')
            resultado = num1 + num2;
        if(op == '-')
            resultado = num1 - num2;
        if(op == '*')
            resultado = num1 * num2;
        if(op == '/')
            resultado = num1 / num2;

        //show the results on the screen
        printf("\n\nO resultado eh: %.2lf", resultado);

        //ask the user if he want to exit, if he does, break the while
        printf("\n\nDigite 0 para encerrar: ");
        scanf("%d", &continua);
        if(continua <= 0)
            break;
    }
    system("pause");
    return 0;

}
