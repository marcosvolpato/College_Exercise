#include <stdio.h>
#include <math.h>

int main(){
    /*
    inicio
    double prov1, prov2, prov3, trab1, trab2, mp, mt, notaFinal;
    
    escreva("qual a nota da primeira prova ")
    leia prov1;
    escreva("qual a nota da segunda prova")
    leia prov2;
    escreva("qual a nota da terceira prova")
    leia prov3;
    
    escreva("qual a nota do primeiro trabalho")
    leia trab1;
    escreva("qual a nota do segundo trabalho")
    leia trab2;
    
    
    escreva ("A nota media final deste aluno eh %lf.\n Obrigado", notaFinal)

    */
    double prov1, prov2, prov3, trab1, trab2, mp, mt, notaFinal;
    printf("Boa Noite \n Qual a nota da primeira prova\n");
    
    scanf("%lf", &prov1);
    
    printf(" Qual a nota da segunda prova\n");
    scanf("%lf", &prov2);
    
    printf(" Qual a nota da terceira prova\n");
    scanf("%lf", &prov3);
    
    printf(" Qual a nota do primeiro trabalho\n");
    scanf("%lf", &trab1);
    
    printf(" Qual a nota do segundo trabalho\n");
    scanf("%lf", &trab2);
    
    mp =  ((2*prov1) + (3*prov2) + (3*prov3))/8;
    
    mt =  (trab1+trab2)/2;
    
    notaFinal = ((8*mp) + (2*mt))/10;
    
    printf("A nota media final deste aluno eh %6.2lf.\n Obrigado", notaFinal);
    
    system("pause");
}
