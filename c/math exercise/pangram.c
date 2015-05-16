#include <stdio.h>
#include <string.h>

char s[101];

int main(void){
    int numCar;
    scanf("%s", s);
    //printf("a string eh: %s\n", s);
    int has[26];
    int hasAll = 0;

    numCar = strlen(s);

    int i;

    for(i=0; i<numCar; ++i){
        has[s[i] - 'a'] = 0;
    }

    int j;

    for(j = 0; i<numCar; ++j){
        if(s[j] >= 'A' && s[j] <='Z'){
            s[j] = s[j] - 'A' + 'a';
            has[s[j] - 'a'] = 1;
            hasAll = 0;
        }else{
            hasAll = 1;
        }

    }
    if(hasAll != 0){
        printf("sim");
    }else{
        printf("Não");
    }
}
