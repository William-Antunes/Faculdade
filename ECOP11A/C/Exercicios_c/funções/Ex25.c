#include <stdio.h>

int exponenciacao(int base, int exp){
    if(exp == 0)
        return 1;
    
    else  
        return base * exponenciacao(base, exp - 1 );

}

int main(){
    int base, exp;

    printf("Digite um número pra ser a base e o expoente: ");
    scanf("%d %d", &base, &exp);


    printf("O resultado é %d", exponenciacao(base, exp));
    return 0;
}