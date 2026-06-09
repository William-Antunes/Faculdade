#include <stdio.h>

int mdc(int x, int y){
    if(x > y)
        return mdc(x-y, y);
    else if (x < y)
        return mdc(y, x);
    else
        return x;
}


int main(){
    int x,y;

    printf("Me diga quais os números para se calcular o mdc: ");
    scanf("%d %d", &x, &y);

    printf("O mdc é: %d", mdc(x,y));

    return 0;
}