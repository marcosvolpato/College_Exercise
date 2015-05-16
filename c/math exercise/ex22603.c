#include <stdio.h>

int main(){
    char num[5];
    printf("Insira um numero com quatro digitos: ");
    scanf("%s", &num);
    int i;
    for(i=0;i<4;i++){
        printf("-> %d", num[i]);
    }

    if(num[0] == 51 && num[1] == 48 && num[2] == 50 && num[3] == 53){
        printf("\natende a condicao 30 + 25 = 55; 55 2 = 3025\n\n");
    }else{
        printf("\nNAO atende a condicao30 + 25 = 55; 55 2 = 3025\n\n");
    }

    system("pause");
    return 0;
}
