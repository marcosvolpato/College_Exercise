/**
* lê um arquivo texto e
* imprime, em um outro arquivo:
* o número de linhas,
* o número total de caracteres,
* o número de espaços em branco e
* o número de caracteres não brancos .
* O nome do arquivo de entrada deve ser digitado pelo pelo usuário
*/
#include <stdio.h>
#include <stdlib.h>

//declare a file pointer Arq
FILE *Arq,*Arq2;
int main(){
    int k,
        linhas=0,
        charNum = 0,
        spcNum = 0,
        nSpcNum = 0;

    char arquivo[200],
         str[500];

    printf(">>Consulta de Arquivo<<\n\n");
    printf("Digite o arquivo a ser consultado: ");
    gets(arquivo);
    //open the numeros.txt file
    Arq=fopen(arquivo,"r");
    if (Arq == NULL){
        printf("Erro ao abrir o arquivo %s", arquivo);
        exit(0);
    }

    Arq2=fopen("resultado.txt","w");
    if (Arq2 == NULL){
        printf("Erro ao criar o arquivo resultado.txt");
        fclose(Arq);
        exit(0);
    }

    while(1){
        k = 0;
        if(!fgets(str, 500, Arq))
            break;
        while(str[k] != '\0'){
            charNum++;
            if(str[k] == ' ')
                spcNum++;
            else
                nSpcNum++;
            k++;
        }
        linhas++;
    }

    fprintf(Arq2,"numero de linhas: ................. %d\n",linhas);
    fprintf(Arq2,"numero de caracteres: ............. %d\n",charNum);
    fprintf(Arq2,"numero de caracteres em branco: ... %d\n",spcNum);
    fprintf(Arq2,"numero de caracteres nao branco: .. %d\n",nSpcNum);

    //close the file
    fclose(Arq);
    fclose(Arq2);

    return 0;
}
