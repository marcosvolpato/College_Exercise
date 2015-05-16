#include <stdio.h>
#include <math.h>

int main(){
    /*
    inicio
    escreva("qual o valor do primeiro cateto")
    leia cat1;
    escreva("qual o valor do segundo cateto");
    leia cat2;
    //h²=c²+c²
    hip = sqtr((c*c)+(c*c));
    escreva ("a hipotenuza é %lf.\n Obrigado", hip)

    */
    double cat1, cat2, hip, temp;
    printf("Boa Noite \n Qual o valor do primeiro cateto\n");
    scanf("%lf", &cat1);
    
    printf(" Qual o valor do segundo cateto\n");
    scanf("%lf", &cat2);
    
    temp = (cat1*cat1)+(cat2*cat2);
    
    hip = sqrt(temp);
    
    printf("O valor da hipotenusa eh %lf\n", hip);
    
    system("pause");
}
