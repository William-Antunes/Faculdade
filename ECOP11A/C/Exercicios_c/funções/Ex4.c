#include <stdio.h>

int pot(int base, int exp){
    for(int i = 2; i < exp; i++){
        base *= base;
    }

    return base;
}


int main(){
    int base, exp;


    printf("Digite um valor pra ser a base da conta e um pra ser o expoente: ");
    scanf("%d %d", &base, &exp);


    printf("O valor %d elevaodo por %d, dá %d", base, exp, pot(base, exp));


    return 0;
}