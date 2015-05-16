/*
    autor: Marcos Vinicius Volpato
    data: 19/03/2015
    objetivo: Exercicio de Lab ICC Prof� Marcio Dellamaro
    Aplica��o que calcula uma equa��o de 2� grau
    Verifica se o a � diferente de zero para continuar
    Verifica se o delta � maior ou igual a zero para continuar
    Recebe como entrada as doubles a, b e c
    Se tudo correr bem exibe o resultado na tela
    
*/

#include <stdio.h>
#include <math.h>

int main(){
    //declara as variaveis
    double a, b, c, delta = 0, x, x2;
    
    //escreve a
    printf("\n\ndigite a: ");
    
    //l� a
    scanf("%lf", &a);
    
    //verifica se a � diferente de zero
    if(a==0){
             //se sim exibe mensagem
             printf("\n\nO a tem que ser diferente de 0(zero).\n");
             
    //se n�o continua
    }else{
          
          //pede e l� as variaveis b e c
        printf("\n\ndigite b: ");
        scanf("%lf", &b);
        printf("\n\ndigite c: ");
        scanf("%lf", &c);
        
        //calcula o delta
        delta = (b * b)-4*a*c;
        
        //verifica se o delta � negativo
        if(delta<0){
                    
                    //se sim exibe msg de erro
                    printf("\n\nA equacao nao possui solucoes reais.\n");
        //se n�o continua
        }else{
              
              // calcula o x e o x2
              x = (-b+(sqrt(delta)))/(2*a);
              x2 = (-b-(sqrt(delta)))/(2*a);
              
              //exibe o resultado
              printf("\nResultado = %.2lf + %.2lf = 0", x2, x);
    
                      
        }
    }
    system("pause");
    
    //fim
    return 0;
}
