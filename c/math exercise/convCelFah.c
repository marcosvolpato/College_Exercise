#include <stdio.h>
#include <math.h>

int main(){
    /*
    inicio
    double cel, fir;
    
    escreva("qual a temperatura em celsios? ")
    leia cel;
  
    escreva ("A nota media final deste aluno eh %6.2lf.\n Obrigado", fir)

    */
    double cel, fir;
    printf("Boa Noite \n Qual a temperatura em celsios?\n"); 
    scanf("%lf", &cel);
    
    fir = (9*(cel/5))+32;
    
    printf("A temperatura em Fahrenheit eh %6.2lf graus.\n Obrigado", fir);
    
    system("pause");
}
