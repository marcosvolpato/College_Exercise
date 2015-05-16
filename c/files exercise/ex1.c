/**
* Written by Marcos Volpato <volpatomv@gmail.com>
* Description: read a number from a file called "numeros.txt",
* if it is pair put in another file called "pares.txt", if not
* put it in a file called "impares.txt".
*/
#include <stdio.h>
#include <stdlib.h>

//declare a file pointer Arq
FILE *Arq;
int main(){

    //open the numeros.txt file
    Arq=fopen("numeros.txt","r");

    //declare variables
    int i,
        j = 0,
        k;
    int num[400];

    //read the numbers and make sure that it is working
    while(1){
        i = fscanf(Arq,"%d", &num[j]);
        if(i != 1)
            break;
        j++;
    }
    //close file
    fclose(Arq);

    //open the second file
    Arq=fopen("impares.txt","w");

    //verify if its not pair and write in the file
    for(k=0;k<j;k++){
        if(num[k] % 2 != 0)
            fprintf(Arq,"%d\n",num[k]);
    }
    //close file
    fclose(Arq);

    //open the third file
    Arq=fopen("pares.txt","w");

    //verify if its pair and write in the file
    for(k=0;k<j;k++){
        if(num[k] % 2 == 0)
            fprintf(Arq,"%d\n",num[k]);
    }
    //close file
    fclose(Arq);
    return 0;
}
