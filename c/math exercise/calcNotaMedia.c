#include <stdio.h>
#include <math.h>

int main(){
    /*
    inicio
    escreva("Boa noite.\nQual a primeira nota")
    leia nota1;
    escreva("Qual a segunda nota");
    leia nota2;
    notaMedia = (nota1 + nota2)/2;
    escreva ("A nota media eh %lf.\n Obrigado", hip)

    */
    double nota1, nota2, notaMedia;
    printf("Boa Noite \n Qual a primeira nota\n");
    scanf("%lf", &nota1);
    
    printf("Qual a segunda nota\n");
    scanf("%lf", &nota2);
    
    notaMedia = (nota1 + nota2)/2;
    
    printf("A nota media eh %lf\n", notaMedia);
    
    system("pause");
}
