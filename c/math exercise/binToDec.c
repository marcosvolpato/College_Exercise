/*
* Written by Marcos Volpato <volpatomv@gmail.com>
* Description: receive a binary number num
* and convert it to decimal number
* showing it to the user
*/
#include <stdio.h>
#include <string.h>

int main(){
    //declare the variables
    char num[50];
    int soma, exp, i, dec, nonInt, continua = 1;

    //run the converter it self in the while
    while(continua >= 0){

        //makes this integer get zero
        nonInt = 0;
        dec = 0;
        exp = 0;
        soma = 0;

        //ask the user for the number what want to convert
        printf("\n>> Conversao de numeros binarios para decimais <<");
        printf("\n\nDigite o numero a ser convertido: ");
        scanf("%s", num);

        //verify if the chars given contains only 0 and 1
        //using the flag nonInt to do that
        for(i = strlen(num)-1; i >= 0; i--){
            if(num[i] != '0' && num[i] != '1')
                nonInt = 1;
        }

        //verify if the flag is active, if it do, makes the user try again
        if(nonInt == 1){
            printf("\n\nNao eh um numero binario!Tente novamente.\a"
            "\nUm numero binario deve conter apenas 0 ou 1.\n\n");
            continue;
        }

        //calculate the exponentials numbers used to convert
        //use if its 1 and dispose if its 0
        for(i = strlen(num)-1; i >= 0; i--){
            if(exp == 0)
                exp = 1;
            else
                exp = exp * 2;
            if(num[i] == '1')
                dec = dec + exp;
        }

        //show the results on the screen
        printf("\nO numero decimal correspondente a %s eh: %d\n\n", num, dec);

        //ask the user if he want to exit, if he does, break the while
        printf("\n\nDigite -1 para encerrar: ");
        scanf("%d", &continua);
        if(continua < 0)
            break;
    }
    system("pause");
    return 0;

}
