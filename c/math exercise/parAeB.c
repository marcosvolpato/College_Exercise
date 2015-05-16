#include<stdio.h>

/*
* Written by Marcos Volpato <volpatomv@gmail.com>
* Description: receive 5 pairs of numbers, a<b and bigger than zero
* Returning all numbers between a and b
*/
int main(){
    //declaring variables
    int a[5],b[5];
    int i, j;

    //receive the pairs of numbers and valid if a is smaller than b and both are bigger than zero
    for(i=0;i<5;i++){
        printf("\n\nDigite a%d e b%d tal que a%d seja menor que b%d(ex: 10,20: ",i+1,i+1,i+1,i+1);
        scanf("%d,%d", &a[i], &b[i]);

            //validating
            while(a[i]>b[i] || a[i]<0 || b[i]<0){
                printf(" \n\na%d nao eh menor que b%d ou sao menores que zero! Tente denovo: ",i+1,i+1);
                scanf("%d,%d", &a[i], &b[i]);
            }
    }

    //run the array from a to b and print the pair numbers
    for(i=0;i<5;i++){
        printf("\n\nnumeros pares entre a%d e b%d\n",i+1,i+1);
        for(j=a[i];j<=b[i];j++){
            if(j % 2 == 0){
                printf("\n%d",j);
            }
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
