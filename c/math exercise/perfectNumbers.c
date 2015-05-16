#include<stdio.h>

/*
* Written by Marcos Volpato <volpatomv@gmail.com>
* Description: receive a number n, bigger than zero,
* what returning the answer if the informed number
* is perfect, in other words, if the number is e
*/
int main(){
    //declaring variables
    int n,i, j=0, getOut=0;
    while(1){
        //receive the pairs of numbers and valid if a is smaller than b and both are bigger than zero
        printf("\n\nInsert a number to know if it`s perfect: ");
        scanf("%d",&n);
        //validating
        while(n<0){
            printf(" \n\nThe informed number must be bigger than zero! please try again: ");
            scanf("%d",&n);
        }
        for(i=1;i<n;i++){
            if(n % i == 0){
                j+=i;
            }
        }
        if(j==n){
            printf(" \n\nThe informed(%d) is perfect!", n);
        }else{
            printf(" \n\nThe informed(%d) isn`t perfect!", n);
        }
        printf("\n\n");
        printf("Do you want to exit?(yes=1, no=0): ");
        scanf("%d", &getOut);
        if(getOut != 0){
            break;
        }
    }
    system("pause");
    return 0;
}
