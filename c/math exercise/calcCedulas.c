/*
* Written by Marcos Volpato <volpatomv@gmail.com>
* Description: receive a integer number and show
* how many notes of R$ 50, R$20 R$100, R$20, R$10
* R$5 and R$2
* at the least we can share among that notes
*/
#include <stdio.h>
#include <string.h>

int main(){
    //declare the variables
    int continua = 1, val, n100, n50, n20, n10,n5,n2;



    //run the application
    while(continua > 0){
        //show title and ask for a integer number
        printf("\n>>Calcula Cedulas<<");
        printf("\nDigite o valor: ");
        scanf("%d",&val);

        //calculate how many notes for each value
        n100 = val / 100;
        n50 = (val % 100)/50;
        n20 = ((val % 100)%50)/20;
        n10 = (((val % 100)%50)%20)/10;
        n5 = ((((val % 100)%50)%20)%10)/5;
        n2 = (((((val % 100)%50)%20)%10)%5)/2;

        //check if the numbers of notes is bigger than zero, if it does, print it on the screen
        if(n100 > 0)
            printf("\n%d notas de 100 - ", n100);
        if(n50 > 0)
            printf("%d notas de 50 - ", n50);
        if(n20 > 0)
            printf("%d notas de 20 - ", n20);
        if(n10 > 0)
            printf("%d notas de 10 - ", n10);
        if(n5> 0)
            printf("%d notas de 5 - ", n5);
        if(n2 > 0)
            printf("%d notas de 2", n2);



        //ask the user if he want to exit, if he does, break the while
        printf("\n\nDigite 0 para encerrar: ");
        scanf("%d", &continua);
        if(continua <= 0)
            break;
    }
    printf("\n\n");
    system("pause");
    return 0;

}
