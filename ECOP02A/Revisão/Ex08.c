#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int expo(int base, int exp){
    int resultado = 1;

    if(exp == 0)
        return 1;
    else if(exp == 1)
        return base;
    else
        return base * expo(base, exp-1);
}

int main(){

    int base, exp;

    scanf("%d %d", &base, &exp);

    printf("%d", expo(base, exp));

    return 0;
}