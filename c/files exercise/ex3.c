/**
* Written by Marcos Volpato <volpatomv@gmail.com>
* Description: create a file called "dados.txt",
* and write all numbers from 1 to 100 with one
* number for each line.
*/
#include <stdio.h>
#include <stdlib.h>

//declare a file pointer Arq
FILE *Arq;
int main(){
    int k;
    //open the numeros.txt file
    Arq=fopen("dados.txt","w");
    if (Arq == NULL) exit(0);

    //write all number from 1 to 100 into the "dados.txt"
    for(k=1;k<=100;k++){
        fprintf(Arq,"%d\n",k);
    }

    //close the file
    fclose(Arq);

    return 0;
}
