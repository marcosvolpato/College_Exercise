#include <stdio.h>
#include <string.h>

/*
* Written by Marcos Volpato <volpatomv@gmail.com>
* Description: receive a number integer num and
* convert to binary number showing it on the screen
*
*/

int main(){
    //declaring variables
    int num, i,j;
    int bin[400];
    char continua;

    //starts a infinity loop to keep the application runing
    while(1){

        //makes counter turn zero
        i = 0;

        //ask for a number
        printf("\nDigite um numero para converte-lo em binario: ");
        scanf("%d",&num);

        //Another infinity loop to calculate the binary number based on num
        while(1){

            if(num <= 0){
                break;
            }
            //puts each number on it right place in array
            bin[i] = num % 2;
            num = (int)num/2;
            i++;
        }

        //shows the ready conversion
        printf("\n\nO numero binario eh: ");
        for(j=i-1;j>=0;j--){
            printf("%d",bin[j]);
        }
        printf("\n\n");

        //clear the memory
        fflush(stdin);

        //ask if the user wants to continue
        printf("\nDigite S para converter outro numero: ");
        scanf("%c",&continua);

        //if it's false break it up
        if(toupper(continua) != 'S'){
            break;
        }

    }
    printf("\n\n");
    system("pause");
    return 0;
}
