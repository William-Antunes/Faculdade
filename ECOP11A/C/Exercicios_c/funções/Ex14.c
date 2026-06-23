#include <stdio.h>
#include <stdlib.h>


int caraoucoroa(){
    int num = rand() % 2;

    if(num == 0){
        return 0;
    } else {
        return 1;
    }
}


int main(){
    int num, cara = 0, coroa = 0;

    printf("Digite quantas vezes você quer jogar cara ou coroa: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        if(caraoucoroa() == 0){
            cara++;
        } else {
            coroa++;
        }
    }
    printf("Cara: %d%%\n", (cara * 100) / num);
    printf("Coroa: %d%%\n", (coroa * 100) / num);
}
